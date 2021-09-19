/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_2;
    QPushButton *Eighth_button;
    QPushButton *Ninth_button;
    QPushButton *Second_button;
    QPushButton *First_button;
    QPushButton *Fourth_button;
    QPushButton *Sixth_button;
    QPushButton *Seventh_button;
    QPushButton *Fifth_button;
    QPushButton *Third_button;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Clear;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(742, 629);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/fir/secondVar.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setStyleSheet(QString::fromUtf8("font: 75 25pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Eighth_button = new QPushButton(centralwidget);
        Eighth_button->setObjectName(QString::fromUtf8("Eighth_button"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Eighth_button->sizePolicy().hasHeightForWidth());
        Eighth_button->setSizePolicy(sizePolicy2);
        Eighth_button->setMinimumSize(QSize(40, 40));
        Eighth_button->setIconSize(QSize(16, 16));

        gridLayout_2->addWidget(Eighth_button, 2, 1, 1, 1);

        Ninth_button = new QPushButton(centralwidget);
        Ninth_button->setObjectName(QString::fromUtf8("Ninth_button"));
        sizePolicy2.setHeightForWidth(Ninth_button->sizePolicy().hasHeightForWidth());
        Ninth_button->setSizePolicy(sizePolicy2);
        Ninth_button->setMinimumSize(QSize(40, 40));
        Ninth_button->setCursor(QCursor(Qt::ArrowCursor));

        gridLayout_2->addWidget(Ninth_button, 2, 2, 1, 1);

        Second_button = new QPushButton(centralwidget);
        Second_button->setObjectName(QString::fromUtf8("Second_button"));
        sizePolicy2.setHeightForWidth(Second_button->sizePolicy().hasHeightForWidth());
        Second_button->setSizePolicy(sizePolicy2);
        Second_button->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(Second_button, 0, 1, 1, 1);

        First_button = new QPushButton(centralwidget);
        First_button->setObjectName(QString::fromUtf8("First_button"));
        sizePolicy2.setHeightForWidth(First_button->sizePolicy().hasHeightForWidth());
        First_button->setSizePolicy(sizePolicy2);
        First_button->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(First_button, 0, 0, 1, 1);

        Fourth_button = new QPushButton(centralwidget);
        Fourth_button->setObjectName(QString::fromUtf8("Fourth_button"));
        sizePolicy2.setHeightForWidth(Fourth_button->sizePolicy().hasHeightForWidth());
        Fourth_button->setSizePolicy(sizePolicy2);
        Fourth_button->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(Fourth_button, 1, 0, 1, 1);

        Sixth_button = new QPushButton(centralwidget);
        Sixth_button->setObjectName(QString::fromUtf8("Sixth_button"));
        sizePolicy2.setHeightForWidth(Sixth_button->sizePolicy().hasHeightForWidth());
        Sixth_button->setSizePolicy(sizePolicy2);
        Sixth_button->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(Sixth_button, 1, 2, 1, 1);

        Seventh_button = new QPushButton(centralwidget);
        Seventh_button->setObjectName(QString::fromUtf8("Seventh_button"));
        sizePolicy2.setHeightForWidth(Seventh_button->sizePolicy().hasHeightForWidth());
        Seventh_button->setSizePolicy(sizePolicy2);
        Seventh_button->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(Seventh_button, 2, 0, 1, 1);

        Fifth_button = new QPushButton(centralwidget);
        Fifth_button->setObjectName(QString::fromUtf8("Fifth_button"));
        sizePolicy2.setHeightForWidth(Fifth_button->sizePolicy().hasHeightForWidth());
        Fifth_button->setSizePolicy(sizePolicy2);
        Fifth_button->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(Fifth_button, 1, 1, 1, 1);

        Third_button = new QPushButton(centralwidget);
        Third_button->setObjectName(QString::fromUtf8("Third_button"));
        sizePolicy2.setHeightForWidth(Third_button->sizePolicy().hasHeightForWidth());
        Third_button->setSizePolicy(sizePolicy2);
        Third_button->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(Third_button, 0, 2, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_2);

        horizontalSpacer_4 = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_3->setStretch(1, 4);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(528, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));

        horizontalLayout->addWidget(Clear);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 742, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Tick-tack-toe", nullptr));
        label_2->setText(QString());
        label->setText(QString());
        Eighth_button->setText(QString());
        Ninth_button->setText(QString());
        Second_button->setText(QString());
        First_button->setText(QString());
        Fourth_button->setText(QString());
        Sixth_button->setText(QString());
        Seventh_button->setText(QString());
        Fifth_button->setText(QString());
        Third_button->setText(QString());
        Clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
