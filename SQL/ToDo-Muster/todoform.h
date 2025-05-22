#ifndef TODOFORM_H
#define TODOFORM_H

#include "ui_todoform.h"

class ToDoForm : public QWidget, private Ui::ToDoForm
{
    Q_OBJECT

public:
    explicit ToDoForm(QWidget *parent = nullptr);
    void setText(QString text);
    QString getText();

signals:
    void requestChecked();
private slots:
    void on_pushButton_clicked();
};

#endif // TODOFORM_H
