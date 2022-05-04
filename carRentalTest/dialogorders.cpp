#include "dialogorders.h"
#include "ui_dialogorders.h"

DialogOrders::DialogOrders(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogOrders)
{
    ui->setupUi(this);
}

DialogOrders::~DialogOrders()
{
    delete ui;
}
