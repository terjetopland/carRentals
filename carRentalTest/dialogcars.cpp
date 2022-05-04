#include "dialogcars.h"
#include "ui_dialogcars.h"

DialogCars::DialogCars(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCars)
{
    ui->setupUi(this);
}

DialogCars::~DialogCars()
{
    delete ui;
}

void DialogCars::on_pushButton_clicked()
{
    DialogCars::~DialogCars();
}

