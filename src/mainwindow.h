#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCameraInfo>
#include <QWidget>
#include <QDir>
#include <QComboBox>


#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
//#include <opencv2/videoio/videoio.hpp>
//#include <opencv2/imgcodecs/imgcodecs.hpp>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
namespace Ui
{
    class MainWindow;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();
        cv::VideoCapture capWebcam;

    private:
        Ui::MainWindow *ui;




        cv::Mat matOriginal;
        cv::Mat matProcessed;
        cv::CascadeClassifier g;

        bool m=g.load("cars.xml");


        CvMemStorage            *storage= cvCreateMemStorage(0);
        QImage qimgOriginal;
        QImage qimgProcessed;

        std::vector<cv::Vec3f> vecCircles;
        std::vector<cv::Vec3f>::iterator itrCircles;

        QTimer* tmrTimer;

    public slots:
        void ballTracking();

    private slots:

        void on_actionFile_triggered();
        void on_actionExit_triggered();
        void on_actionAbout_triggered();
        void on_actionWebcam_triggered();
        void on_actionAdd_URL_triggered();

};

#endif // MAINWINDOW_H
