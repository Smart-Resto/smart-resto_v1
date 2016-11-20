#include "dialog_salao.h"
#include "ui_dialog_salao.h"

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
