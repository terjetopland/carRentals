#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui_main(new Ui::MainWindow)
{
    ui_main->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui_main;
}

void MainWindow::on_pushButton_addCustomer_clicked()
{
    aCustomer = new addCustomer(this);
    aCustomer->show();
}

void MainWindow::on_pushButton_listAll_clicked()
{
    lAll = new ListAll(this);
    lAll->show();
}


void MainWindow::on_pushButton_addCar_clicked()
{
    aCar = new addCar(this);
    ui_main->label_test_text->setText(QString("Button_addCar was pressed"));
    aCar->show();
}




