#include "addcar.h"
#include "ui_addcar.h"

addCar::addCar(QWidget *parent) :
    QDialog(parent),
    ui_car(new Ui::addCar)
{
    ui_car->setupUi(this);
}

addCar::~addCar()
{
    delete ui_car;
}


void addCar::on_pushButton_ok_clicked()
{

    this->close();
}


void addCar::on_pushButton_cancel_clicked()
{
    this->close();
}


