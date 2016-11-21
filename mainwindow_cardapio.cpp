#include "mainwindow_cardapio.h"
#include "ui_mainwindow_cardapio.h"



#include <qspinbox.h>
#include <qlcdnumber.h>



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
    double preco_1 = 3.75;
    ui->lcdNumber_1->display(arg1*preco_1);
}

void MainWindow_cardapio::on_spinBox_02_valueChanged(int arg1)
{
    arg1 = arg1;
    double preco_2 = 18;
    ui->lcdNumber_2->display(arg1*preco_2);
}

void MainWindow_cardapio::on_spinBox_03_valueChanged(int arg1)
{
    arg1 = arg1;
    double preco_3 = 13.99;
    ui->lcdNumber_3->display(arg1*preco_3);
}

void MainWindow_cardapio::on_spinBox_04_valueChanged(int arg1)
{
    arg1 = arg1;
    double preco_4 = 23.50;
    ui->lcdNumber_4->display(arg1*preco_4);
}

void MainWindow_cardapio::on_spinBox_05_valueChanged(int arg1)
{
    arg1 = arg1;
    double preco_5 = 6.70;
    ui->lcdNumber_5->display(arg1*preco_5);
}
