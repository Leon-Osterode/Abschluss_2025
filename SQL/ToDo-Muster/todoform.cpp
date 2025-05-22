#include "todoform.h"

ToDoForm::ToDoForm(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);
}

void ToDoForm::setText(QString text)
{
    /*if (!text.isEmpty()) */
    ln_todo->setText(text);
}

QString ToDoForm::getText()
{
    return ln_todo->text();
}

void ToDoForm::on_pushButton_clicked()
{
    emit requestChecked();
}

