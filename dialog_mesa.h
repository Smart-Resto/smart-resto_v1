#ifndef DIALOG_MESA_H
#define DIALOG_MESA_H

#include <QDialog>
#include "dialog_salao.h"
#include "mainwindow_cardapio.h"

namespace Ui {
class Dialog_mesa;
}

class MainWindow_cardapio;

class Dialog_mesa : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_mesa(QWidget *parent = 0);
    ~Dialog_mesa();
    MainWindow_cardapio *cardapio_01;

private slots:
    void on_pushButton_voltar_clicked();

    void on_pushButton_cardapio_clicked();

private:
    Ui::Dialog_mesa *ui;
};

#endif // DIALOG_MESA_H
