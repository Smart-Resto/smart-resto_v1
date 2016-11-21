#include "mainwindow_cardapio.h"
#include "ui_mainwindow_cardapio.h"







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
