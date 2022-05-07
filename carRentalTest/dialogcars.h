 #ifndef DIALOGCARS_H
#define DIALOGCARS_H

#include <QDialog>

namespace Ui {
class DialogCars;
}

class DialogCars : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCars(QWidget *parent = nullptr);
    ~DialogCars();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DialogCars *ui;
};

#endif // DIALOGCARS_H
