#ifndef DIALOGORDERS_H
#define DIALOGORDERS_H

#include <QDialog>

namespace Ui {
class DialogOrders;
}

class DialogOrders : public QDialog
{
    Q_OBJECT

public:
    explicit DialogOrders(QWidget *parent = nullptr);
    ~DialogOrders();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::DialogOrders *ui;


};

#endif // DIALOGORDERS_H
