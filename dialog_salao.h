#ifndef DIALOG_SALAO_H
#define DIALOG_SALAO_H

#include <QDialog>

namespace Ui {
class Dialog_salao;
}

class Dialog_salao : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_salao(QWidget *parent = 0);
    ~Dialog_salao();

private:
    Ui::Dialog_salao *ui;
};

#endif // DIALOG_SALAO_H
