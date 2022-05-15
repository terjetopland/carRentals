#ifndef ADDCUSTOMER_H
#define ADDCUSTOMER_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {class addCustomer;}
QT_END_NAMESPACE

class addCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit addCustomer(QWidget *parent = nullptr);
    ~addCustomer();

protected slots:
    void on_pushButton_ok_clicked();
    void on_pushButton_cancel_clicked();

protected:
    Ui::addCustomer *ui_customer;
};

#endif // ADDCUSTOMER_H
