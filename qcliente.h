#ifndef QCLIENTE_H
#define QCLIENTE_H

#include <QObject>

class QCliente : public QObject
{
    Q_OBJECT
public:
    explicit QCliente(QObject *parent = 0);

signals:

public slots:

private:
    QString nome;
    QString username;
    QString password;
    int mesa;
    double conta;
    QString pedidos;
};

#endif // QCLIENTE_H
