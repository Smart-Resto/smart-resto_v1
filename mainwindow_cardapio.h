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

private:
    Ui::MainWindow_cardapio *ui;
};

#endif // MAINWINDOW_CARDAPIO_H
