#include "dialog_mesa.h"
#include "ui_dialog_mesa.h"
#include "dialog_salao.h"


#include "mainwindow_cardapio.h"



Dialog_mesa::Dialog_mesa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_mesa)
{
    ui->setupUi(this);
}

Dialog_mesa::~Dialog_mesa()
{
    delete ui;
}

void Dialog_mesa::on_pushButton_voltar_clicked()
{
    //salao.show();
}

void Dialog_mesa::on_pushButton_cardapio_clicked()
{
    cardapio_01 = new MainWindow_cardapio(this);
    cardapio_01->show();
}
