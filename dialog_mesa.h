#ifndef DIALOG_MESA_H
#define DIALOG_MESA_H

#include <QDialog>

namespace Ui {
class Dialog_mesa;
}

class Dialog_mesa : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_mesa(QWidget *parent = 0);
    ~Dialog_mesa();

private:
    Ui::Dialog_mesa *ui;
};

#endif // DIALOG_MESA_H
