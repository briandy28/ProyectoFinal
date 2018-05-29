#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include "gemas.h"

namespace Ui {
class juego;
}

class juego : public QMainWindow
{
    Q_OBJECT

public:
    explicit juego(QWidget *parent = 0);
    ~juego();

    QTimer* timer1;

private:
    Ui::juego *ui;
    QGraphicsScene *scene;

public slots:
    void generar();
};

#endif // JUEGO_H
