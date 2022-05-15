#include "addcustomer.h"
#include "ui_addcustomer.h"

addCustomer::addCustomer(QWidget *parent)
    : QDialog(parent)
    , ui_customer(new Ui::addCustomer)
{
    ui_customer->setupUi(this);
}

addCustomer::~addCustomer()
{
    delete ui_customer;
}

void addCustomer::on_pushButton_ok_clicked()
{
    this->close();
}


void addCustomer::on_pushButton_cancel_clicked()
{
    this->close();
}
