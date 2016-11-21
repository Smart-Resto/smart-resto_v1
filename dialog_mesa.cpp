#include "dialog_mesa.h"
#include "ui_dialog_mesa.h"
#include <QMessageBox>



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
