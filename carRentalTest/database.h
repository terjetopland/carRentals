#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QWidget>

class database : public QWidget
{
    Q_OBJECT

public:
    explicit database(QWidget *parent = nullptr);

protected slots:

protected:


};

#endif // DATABASE_H
