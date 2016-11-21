#include "mainwindow_cardapio.h"
#include "ui_mainwindow_cardapio.h"
#include <qspinbox.h>
#include <qlcdnumber.h>
#include "qcliente.h"

//*****Lista de Preços******//
    double preco_1 = 3.75;
    double preco_2 = 18;
    double preco_3 = 13.99;
    double preco_4 = 23.50;
    double preco_5 = 6.70;
//*************************//

MainWindow_cardapio::MainWindow_cardapio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_cardapio)
{
    ui->setupUi(this);
}

MainWindow_cardapio::~MainWindow_cardapio()
{
    delete ui;
}


void MainWindow_cardapio::on_spinBox_01_valueChanged(int arg1)
{
    arg1 = arg1;
    ui->lcdNumber_1->display(arg1*preco_1);
}

void MainWindow_cardapio::on_spinBox_02_valueChanged(int arg1)
{
    arg1 = arg1;
    ui->lcdNumber_2->display(arg1*preco_2);
}

void MainWindow_cardapio::on_spinBox_03_valueChanged(int arg1)
{
    arg1 = arg1;
    ui->lcdNumber_3->display(arg1*preco_3);
}

void MainWindow_cardapio::on_spinBox_04_valueChanged(int arg1)
{
    arg1 = arg1;
    ui->lcdNumber_4->display(arg1*preco_4);
}

void MainWindow_cardapio::on_spinBox_05_valueChanged(int arg1)
{
    arg1 = arg1;
    ui->lcdNumber_5->display(arg1*preco_5);
}

void MainWindow_cardapio::on_pushButton_voltar_clicked()
{
    hide();
}

void MainWindow_cardapio::on_pushButton_01_clicked()
{
    ui->lcdNumber_1->display(preco_1);
    ui->spinBox_01->setValue(1);
}

void MainWindow_cardapio::on_pushButton_02_clicked()
{
    ui->lcdNumber_2->display(preco_2);
    ui->spinBox_02->setValue(1);
}

void MainWindow_cardapio::on_pushButton_03_clicked()
{
    ui->lcdNumber_3->display(preco_3);
    ui->spinBox_03->setValue(1);
}

void MainWindow_cardapio::on_pushButton_04_clicked()
{
    ui->lcdNumber_4->display(preco_4);
    ui->spinBox_04->setValue(1);
}

void MainWindow_cardapio::on_pushButton_05_clicked()
{
    ui->lcdNumber_5->display(preco_5);
    ui->spinBox_05->setValue(1);
}
