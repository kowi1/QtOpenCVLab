#ifndef CAMERADIALOG_H
#define CAMERADIALOG_H

#include <QDialog>
#include <QDialogButtonBox>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
namespace Ui
{
    class CameraDialog;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class CameraDialog : public QDialog
{
    Q_OBJECT

    public:
        explicit CameraDialog(QWidget *parent = 0);
        ~CameraDialog();
      QString CamName;
    private:
        Ui::CameraDialog *ui;


    public slots:
   void on_bottonBox_clicked();
    private slots:

};

#endif // CAMERADIALOG_H
