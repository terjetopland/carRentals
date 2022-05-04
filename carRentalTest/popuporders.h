#ifndef POPUPORDERS_H
#define POPUPORDERS_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class popUpOrders;
}

class popUpOrders : public QWidget
{
    Q_OBJECT

public:
    explicit popUpOrders(QWidget *parent = nullptr);
    ~popUpOrders();

private:
    Ui::popUpOrders *ui;
};

#endif // POPUPORDERS_H
