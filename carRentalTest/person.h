#ifndef PERSON_H
#define PERSON_H

#include <QApplication>

class Person
{
private:
    QString personalNumber;
    QString name;
    QString email;
    QString phoneNumber;

public:
    Person(QString name, QString email);

    void GetPersonalnumber();

    void GetName();
    void SetName();

    void GetEmail();
    void SetEmail();

    void GetPhoneNumber();
    void SetPhoneNumber();


};

#endif // PERSON_H
