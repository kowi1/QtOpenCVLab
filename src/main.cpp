#include "mainwindow.h"
#include <QApplication>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setApplicationName("QtVisionLab");
    app.setOrganizationName("Unilag");
    app.setOrganizationDomain("Unilag.edu.ng");

    MainWindow w;
    w.show();

    return app.exec();
}
