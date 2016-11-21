#ifndef INICIO_H
#define INICIO_H

#include <QMainWindow>
#include <QMessageBox>
#include "dialog_salao.h"
#include "ui_dialog_salao.h"

namespace Ui {
class Inicio;
}

class Inicio : public QMainWindow
{
    Q_OBJECT

public:
    explicit Inicio(QWidget *parent = 0);
    ~Inicio();

private slots:
    void on_pushButton_entrar_clicked();

private:
    Ui::Inicio *ui;
    Dialog_salao *salao;
};

#endif // INICIO_H
