#include "mainwindow_inicio.h"
#include "ui_mainwindow_inicio.h"
#include <QMessageBox>
#include "dialog_salao.h"





Inicio::Inicio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Inicio)
{
    ui->setupUi(this);
}

Inicio::~Inicio()
{
    delete ui;
}

void Inicio::on_pushButton_entrar_clicked()
{
    QString username = ui->lineEdit_usuario->text();
    QString password = ui->lineEdit_senha->text();
    if(username == "teste" && password == "teste")
    {
        QMessageBox::information(this,"Login","Bem-vindo");
        hide();
        salao = new Dialog_salao(this);
        salao->exec();
    }else
    {
        QMessageBox::warning(this,"Login","Usuario ou senha incorretos");
    }
}
