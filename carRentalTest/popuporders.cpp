#include "popuporders.h"
#include "ui_popuporders.h"

popUpOrders::popUpOrders(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::popUpOrders)
{
    ui->setupUi(this);
}

popUpOrders::~popUpOrders()
{
    delete ui;
}
