#include "mainwindow.h"
#include "aboutdialog.h"
#include "cameradialog.h"
#include "ui_mainwindow.h"

#include <QtCore>
#include <QDateTime>
#include <QCameraInfo>
#include <QFileDialog>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

       const QList<QCameraInfo> availableCameras = QCameraInfo::availableCameras();

    // Start capture
    capWebcam.open(0);


    if(capWebcam.isOpened() == false)
    {
        ui->textConsole_3->appendPlainText("Error: Webcam could not be accessed");
        return;
    }
    else
    {
        ui->textConsole_3->appendPlainText("Webcam started...");
    }

    // Start timer
    tmrTimer = new QTimer(this);
    connect(tmrTimer, SIGNAL(timeout()), this, SLOT(ballTracking()));
    tmrTimer->start(20);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
MainWindow::~MainWindow()
{
    delete ui;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::ballTracking()
{   int input_resize_percent= 30;
    cv::Mat defaultframe;
    cv::Mat defaultframe1;
    capWebcam.read(matOriginal);
    capWebcam.read(defaultframe1);

    if(matOriginal.empty() == true)
    {
        ui->textConsole_3->appendPlainText("Error: Webcam frame could not be accessed");
        return;
    }
    cv::Mat *Mat = new cv::Mat(matOriginal);
    cv::Mat *Mat2 = new cv::Mat(matOriginal);
    cv::resize(*Mat,*Mat2,cvSize(300, 300));
    cv::resize(defaultframe1,defaultframe,cvSize(300, 300));


   std::vector<cv::Rect> pedestrians;
   g.detectMultiScale( *Mat2, pedestrians, 1.1, 2, 0|CV_HAAR_SCALE_IMAGE, cv::Size(10, 10) );


       ui->textConsole_3->appendPlainText(QString::number(pedestrians.size()));


    for (int i = 0; i <  pedestrians.size() ; i++)
    {
       // CvRect *r = (CvRect*)cvGetSeqElem(object, i);

        cv::rectangle(*Mat2,
            cvPoint(pedestrians[i].x, pedestrians[i].y),
            cvPoint(pedestrians[i].x + pedestrians[i].width, pedestrians[i].y + pedestrians[i].height),
            CV_RGB(255, 0, 0), 2, 8, 0);
    }



    cv::cvtColor(matOriginal, matOriginal, CV_BGR2RGB);
    //matProcessed = cv::cvarrToMat(frame);
    matProcessed=*Mat2;
   // defaultframe = cv::cvarrToMat(frame2);
    cv::cvtColor(defaultframe, defaultframe, CV_BGR2RGB);
    cv::cvtColor(matProcessed, matProcessed, CV_BGR2RGB);
    QImage qimgOriginal((uchar*)matOriginal.data, matOriginal.cols, matOriginal.rows, matOriginal.step, QImage::Format_RGB32);
    QImage qimgProcessed((uchar*)matProcessed.data, matProcessed.cols, matProcessed.rows, matProcessed.step,QImage::Format_RGB888 /*QImage::Format_Indexed8*/);
    QImage qimgdefaultframe((uchar*)defaultframe.data, defaultframe.cols, defaultframe.rows, defaultframe.step, QImage::Format_RGB888);

    ui->lblOriginal_3->setPixmap(QPixmap::fromImage(qimgdefaultframe));
    ui->lblProcessed_3->setPixmap(QPixmap::fromImage(qimgProcessed));


}
void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::on_actionAbout_triggered()
{
    AboutDialog aboutDialog;
    aboutDialog.setModal(true);
    aboutDialog.exec();
}

void MainWindow::on_actionFile_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open Image"), " ", tr("Video Files (*.avi *.mp4 *.mjpeg *.mov)"));
      capWebcam.release();
      std::string current_locale_text = fileName.toLocal8Bit().constData();
      capWebcam.open( current_locale_text);
}
void MainWindow::on_actionWebcam_triggered()
{

      capWebcam.release();

      capWebcam.open("http://192.168.8.100:1212/videofeed?.mjpg");
}
void MainWindow::on_actionAdd_URL_triggered()
{
    CameraDialog cameraDialog;
    cameraDialog.setModal(true);

    cameraDialog.exec();
    cameraDialog.on_bottonBox_clicked();
    std::string current_locale_text = cameraDialog.CamName.toLocal8Bit().constData();

    capWebcam.open(current_locale_text);
     ui->textConsole_3->appendPlainText(cameraDialog.CamName);

}
