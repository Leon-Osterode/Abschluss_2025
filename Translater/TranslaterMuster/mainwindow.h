#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"

#include <QMainWindow>
#include <QtCore>
#include <QMessageBox>

#define KEY_LANG_DE QString("de")
#define KEY_LANG_EN QString("en")

class MainWindow : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QTranslator* translator;
    void loadLang(QString key);

private slots:
    void on_btn_click_clicked();
    void on_btn_lang_clicked();
};
#endif // MAINWINDOW_H
