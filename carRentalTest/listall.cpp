#include "listall.h"
#include "ui_listall.h"

ListAll::ListAll(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListAll)
{
    ui->setupUi(this);
}

ListAll::~ListAll()
{
    delete ui;
}
