#include "inicio.h"
#include <QApplication>
#include <QMessageBox>


#include <QStackedWidget>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Inicio w;
    w.show();

    return a.exec();
}
