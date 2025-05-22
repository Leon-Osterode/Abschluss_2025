#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), translator(new QTranslator())
{
    setupUi(this);
    QCoreApplication::installTranslator(translator);
    loadLang((QLocale::system().language() == QLocale::German) ? KEY_LANG_DE : KEY_LANG_EN);
}

MainWindow::~MainWindow() {}

void MainWindow::loadLang(QString key)
{
    if (!translator->load(QString(":/lang/lang_%1").arg(key))) QMessageBox::critical(this, "Error", "Error loading the language file");
    retranslateUi(this);
}

void MainWindow::on_btn_lang_clicked()
{
    if (translator->language() == "de_DE") loadLang(KEY_LANG_EN);
    else loadLang(KEY_LANG_DE);
}

void MainWindow::on_btn_click_clicked()
{
    QMessageBox::information(this, tr("Information"), tr("Das ist ein Fenster!"));
}
