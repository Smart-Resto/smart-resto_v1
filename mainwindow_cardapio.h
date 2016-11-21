#ifndef MAINWINDOW_CARDAPIO_H
#define MAINWINDOW_CARDAPIO_H

#include <QMainWindow>

namespace Ui {
class MainWindow_cardapio;
}

class MainWindow_cardapio : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_cardapio(QWidget *parent = 0);
    ~MainWindow_cardapio();

private slots:
    void on_spinBox_01_valueChanged(int arg1);

    void on_spinBox_02_valueChanged(int arg1);

    void on_spinBox_03_valueChanged(int arg1);

    void on_spinBox_04_valueChanged(int arg1);

    void on_spinBox_05_valueChanged(int arg1);

    void on_pushButton_voltar_clicked();

    void on_pushButton_01_clicked();

    void on_pushButton_02_clicked();

    void on_pushButton_03_clicked();

    void on_pushButton_04_clicked();

    void on_pushButton_05_clicked();

private:
    Ui::MainWindow_cardapio *ui;
};

#endif // MAINWINDOW_CARDAPIO_H
