#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"

#include <QMainWindow>
#include <QFileDialog>
#include "todoform.h"
#include "dbmanager.h"

class MainWindow : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    DBManager* db;
    QString fileName;
    QList<ToDoForm*> list;
    void addForm(QString text);
    void delForm(int index);

private slots:
    void deleteForm();
    void on_btn_add_clicked();
    void on_actionToDo_Laden_triggered();
    void on_actionToDo_Speichern_triggered();
};
#endif // MAINWINDOW_H
