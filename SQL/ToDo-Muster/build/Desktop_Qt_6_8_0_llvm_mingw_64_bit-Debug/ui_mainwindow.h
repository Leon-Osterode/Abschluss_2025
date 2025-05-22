/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionToDo_Laden;
    QAction *actionToDo_Speichern;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *todo_layout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *ln_todo;
    QPushButton *btn_add;
    QMenuBar *menubar;
    QMenu *menuEinstellungen;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionToDo_Laden = new QAction(MainWindow);
        actionToDo_Laden->setObjectName("actionToDo_Laden");
        actionToDo_Speichern = new QAction(MainWindow);
        actionToDo_Speichern->setObjectName("actionToDo_Speichern");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        todo_layout = new QVBoxLayout(groupBox);
        todo_layout->setObjectName("todo_layout");

        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        ln_todo = new QLineEdit(centralwidget);
        ln_todo->setObjectName("ln_todo");

        horizontalLayout->addWidget(ln_todo);

        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName("btn_add");

        horizontalLayout->addWidget(btn_add);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuEinstellungen = new QMenu(menubar);
        menuEinstellungen->setObjectName("menuEinstellungen");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuEinstellungen->menuAction());
        menuEinstellungen->addAction(actionToDo_Laden);
        menuEinstellungen->addAction(actionToDo_Speichern);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionToDo_Laden->setText(QCoreApplication::translate("MainWindow", "ToDo Laden...", nullptr));
        actionToDo_Speichern->setText(QCoreApplication::translate("MainWindow", "ToDo Speichern...", nullptr));
        groupBox->setTitle(QString());
        btn_add->setText(QCoreApplication::translate("MainWindow", "\342\236\225", nullptr));
        menuEinstellungen->setTitle(QCoreApplication::translate("MainWindow", "Einstellungen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
