#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "listall.h"
#include "addcar.h"
#include "addcustomer.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected slots:
    void on_pushButton_addCustomer_clicked();
    void on_pushButton_listAll_clicked();
    void on_pushButton_addCar_clicked();


protected:
    Ui::MainWindow *ui_main;

    ListAll *lAll;
    addCar *aCar;
    addCustomer *aCustomer;

};
#endif // MAINWINDOW_H
