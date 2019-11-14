/********************************************************************************
** Form generated from reading UI file 'cameradialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERADIALOG_H
#define UI_CAMERADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_CameraDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *camName;
    QLineEdit *url;

    void setupUi(QDialog *CameraDialog)
    {
        if (CameraDialog->objectName().isEmpty())
            CameraDialog->setObjectName(QStringLiteral("CameraDialog"));
        CameraDialog->resize(438, 199);
        buttonBox = new QDialogButtonBox(CameraDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(50, 160, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(CameraDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 91, 16));
        label_2 = new QLabel(CameraDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 47, 13));
        camName = new QLineEdit(CameraDialog);
        camName->setObjectName(QStringLiteral("camName"));
        camName->setGeometry(QRect(130, 40, 231, 20));
        url = new QLineEdit(CameraDialog);
        url->setObjectName(QStringLiteral("url"));
        url->setGeometry(QRect(130, 90, 231, 20));

        retranslateUi(CameraDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CameraDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CameraDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CameraDialog);
    } // setupUi

    void retranslateUi(QDialog *CameraDialog)
    {
        CameraDialog->setWindowTitle(QApplication::translate("CameraDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("CameraDialog", "Camera Name", nullptr));
        label_2->setText(QApplication::translate("CameraDialog", "URL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CameraDialog: public Ui_CameraDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERADIALOG_H
