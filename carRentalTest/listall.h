#ifndef LISTALL_H
#define LISTALL_H

#include <QDialog>

namespace Ui {
class ListAll;
}

class ListAll : public QDialog
{
    Q_OBJECT

public:
    explicit ListAll(QWidget *parent = nullptr);
    ~ListAll();

private:
    Ui::ListAll *ui;
};

#endif // LISTALL_H
