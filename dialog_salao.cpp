#include "dialog_salao.h"
#include "ui_dialog_salao.h"
#include <QMessageBox>
#include "dialog_mesa.h"
#include "inicio.h"

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
    close();
    mesa_01 = new Dialog_mesa(this);
    mesa_01->exec();
}

void Dialog_salao::on_pushButton_mesa_02_clicked()
{
    close();
    mesa_02 = new Dialog_mesa(this);
    mesa_02->exec();
}

void Dialog_salao::on_pushButton_mesa_03_clicked()
{
    close();
    mesa_03 = new Dialog_mesa(this);
    mesa_03->exec();
}

void Dialog_salao::on_pushButton_mesa_04_clicked()
{
    close();
    mesa_04 = new Dialog_mesa(this);
    mesa_04->exec();
}

