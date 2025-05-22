/********************************************************************************
** Form generated from reading UI file 'todoform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODOFORM_H
#define UI_TODOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToDoForm
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *ln_todo;
    QPushButton *pushButton;

    void setupUi(QWidget *ToDoForm)
    {
        if (ToDoForm->objectName().isEmpty())
            ToDoForm->setObjectName("ToDoForm");
        ToDoForm->resize(274, 46);
        horizontalLayout = new QHBoxLayout(ToDoForm);
        horizontalLayout->setObjectName("horizontalLayout");
        ln_todo = new QLineEdit(ToDoForm);
        ln_todo->setObjectName("ln_todo");

        horizontalLayout->addWidget(ln_todo);

        pushButton = new QPushButton(ToDoForm);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton);


        retranslateUi(ToDoForm);

        QMetaObject::connectSlotsByName(ToDoForm);
    } // setupUi

    void retranslateUi(QWidget *ToDoForm)
    {
        ToDoForm->setWindowTitle(QCoreApplication::translate("ToDoForm", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("ToDoForm", "\342\234\224\357\270\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToDoForm: public Ui_ToDoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODOFORM_H
