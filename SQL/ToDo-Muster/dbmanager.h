#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QtCore>
#include <QtSql>

#define SQL_CREATE_TABLE QString("create table todo (id integer primary key, todos string not null);")
#define SQL_INSERT QString("insert into todo values(%1,'%2');")
#define SQL_SELECT QString("select * from todo order by id;")

class DBManager
{
public:
    DBManager();
    QList<QString> loadToDo(const QString& filename, bool* ok = nullptr);
    bool saveToDo(const QString& filename, const QList<QString>& data);
private:
    QSqlDatabase db;
    bool createDbTable();
    bool writeData(const QList<QString>& data);
    bool readData(QList<QString>& data);
};

#endif // DBMANAGER_H
