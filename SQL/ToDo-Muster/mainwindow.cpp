#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), db(new DBManager())
{
    setupUi(this);
}

MainWindow::~MainWindow() {}

void MainWindow::deleteForm()
{
    int i;
    for (i = 0; i < list.count(); i++) {
        if (sender() == list[i]) break;
    }
    delForm(i);
}

void MainWindow::delForm(int index)
{
    todo_layout->removeWidget(list[index]);
    delete list.takeAt(index);
}

void MainWindow::on_btn_add_clicked()
{
    if (ln_todo->text().isEmpty()) return;
    addForm(ln_todo->text());
    ln_todo->clear();
}

void MainWindow::addForm(QString text)
{
    ToDoForm* todo = new ToDoForm;
    list << todo;
    todo->setText(text);
    todo_layout->addWidget(todo);
    connect(todo, SIGNAL(requestChecked()), this, SLOT(deleteForm()));
}

void MainWindow::on_actionToDo_Laden_triggered()
{
    QString selectedFile = QFileDialog::getOpenFileName(this, QString("ToDo Laden"), fileName, QString("ToDo-Datei (*.todo);;all files (*)"));
    if(selectedFile.isEmpty()) return;
    fileName = selectedFile;
    bool ok = false;
    QList<QString> newToDo = db->loadToDo(fileName, &ok);
    if(!ok) return;
    while (!list.isEmpty()) delForm(list.count() - 1);
    for (int i = 0; i < newToDo.count(); i++) addForm(newToDo[i]);
}


void MainWindow::on_actionToDo_Speichern_triggered()
{
    if(list.isEmpty()) return;
    QString selectedFile = QFileDialog::getSaveFileName(this, QString("ToDo Laden"), fileName, QString("ToDo-Datei (*.todo);;all files (*)"));
    if(selectedFile.isEmpty()) return;
    fileName = selectedFile;
    QList<QString> newToDo;
    for (int i = 0; i < list.count(); i++) newToDo << list[i]->getText();
    db->saveToDo(fileName, newToDo);
}

