#include "dbmanager.h"

DBManager::DBManager() : db(QSqlDatabase::addDatabase("QSQLITE")) {}

QList<QString> DBManager::loadToDo(const QString &filename, bool *ok)
{
    QList<QString> data;
    db.setDatabaseName(filename);
    bool success = QFile::exists(filename);
    if(success) success = db.open();
    if(success) success = readData(data);
    else qWarning() << QString("DB-Fehler!\r%1").arg(db.lastError().text());
    if(db.isOpen()) db.close();
    if(ok) *ok = success;
    return data;
}

bool DBManager::saveToDo(const QString &filename, const QList<QString> &data)
{
    db.setDatabaseName(filename);
    bool success = true;
    if(QFile::exists(filename)) success = QFile::remove(filename);
    if(success) success = db.open();
    if(success) success = createDbTable();
    if(success) success = writeData(data);
    else qWarning() << QString("DB-Fehler!\r%1").arg(db.lastError().text());
    if(db.isOpen()) db.close();
    return success;
}

// private:

bool DBManager::createDbTable()
{
    QSqlQuery query;
    if(query.exec(SQL_CREATE_TABLE)) return true;
    qWarning() << QString("Fehler beim erstellen der Tabelle!\r%1").arg(query.lastError().text());
    return false;
}

bool DBManager::writeData(const QList<QString> &data)
{
    QSqlQuery query;
    bool ok = true;
    qWarning() << data;
    for(int i = 0; i < data.count() && ok; i++) ok = query.exec(SQL_INSERT.arg(i).arg(data[i]));
    if(!ok) qWarning() << QString("Fehler beim Speicherm der Daten!\r%1").arg(query.lastError().text());
    return ok;
}

bool DBManager::readData(QList<QString> &data)
{
    QSqlQuery query;
    if(!query.exec(SQL_SELECT)) {
        qWarning() << QString("Fehler beim Laden der Daten!\r%1").arg(query.lastError().text());
        return false;
    }
    while(query.next()) data << query.value(1).toString();
    return true;
}
