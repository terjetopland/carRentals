#include "database.h"

database::database(QWidget *parent)
    : QWidget{parent}
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
       db.setHostName("acidalia");
       db.setDatabaseName("customdb");
       bool ok = db.open();
}
