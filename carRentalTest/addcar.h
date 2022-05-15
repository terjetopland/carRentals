#ifndef ADDCAR_H
#define ADDCAR_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {class addCar;}
QT_END_NAMESPACE

class addCar : public QDialog
{
    Q_OBJECT

public:
    explicit addCar(QWidget *parent = nullptr);
    ~addCar();

protected slots:
    void on_pushButton_ok_clicked();
    void on_pushButton_cancel_clicked();


protected:
    Ui::addCar *ui_car;
};

#endif // ADDCAR_H
