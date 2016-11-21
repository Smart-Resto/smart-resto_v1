#include "dialog_salao.h"
#include "ui_dialog_salao.h"

#include "dialog_mesa.h"
#include "ui_dialog_mesa.h"




Dialog_salao::Dialog_salao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_salao)
{
    ui->setupUi(this);
}

Dialog_salao::~Dialog_salao()
{
    delete ui;
}

void Dialog_salao::on_pushButton_mesa_01_clicked()
{
    hide();
    mesa_01 = new Dialog_mesa(this);
    mesa_01->exec();
}

void Dialog_salao::on_pushButton_mesa_02_clicked()
{
    hide();
    mesa_02 = new Dialog_mesa(this);
    mesa_02->exec();
}

void Dialog_salao::on_pushButton_mesa_03_clicked()
{
    hide();
    mesa_03 = new Dialog_mesa(this);
    mesa_03->exec();
}

void Dialog_salao::on_pushButton_mesa_04_clicked()
{
    hide();
    mesa_04 = new Dialog_mesa(this);
    mesa_04->exec();
}

