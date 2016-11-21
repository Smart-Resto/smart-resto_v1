#ifndef DIALOG_SALAO_H
#define DIALOG_SALAO_H

#include <QDialog>
#include "dialog_mesa.h"
#include "ui_dialog_mesa.h"

namespace Ui {
class Dialog_salao;
}

class Dialog_mesa;

class Dialog_salao : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_salao(QWidget *parent = 0);
    ~Dialog_salao();
   Dialog_mesa *mesa_01;
   Dialog_mesa *mesa_02;
   Dialog_mesa *mesa_03;
   Dialog_mesa *mesa_04;
private slots:
    void on_pushButton_mesa_01_clicked();

    void on_pushButton_mesa_02_clicked();

    void on_pushButton_mesa_03_clicked();

    void on_pushButton_mesa_04_clicked();

private:
    Ui::Dialog_salao *ui;

};

#endif // DIALOG_SALAO_H
