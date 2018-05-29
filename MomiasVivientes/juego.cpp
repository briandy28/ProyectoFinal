#include "juego.h"
#include "ui_juego.h"

juego::juego(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::juego)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(100,50,500,400);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setBackgroundBrush(QBrush(QImage(":/fondo")));

    timer1 = new QTimer();
    connect(timer1, SIGNAL(timeout()),this,SLOT(generar()));
    timer1->start(2500);
}

juego::~juego()
{
    delete ui;
}

void juego::generar()
{
    gemas* gema = new gemas();
    scene->addItem(gema);
}
//void dino::generar()
//{
//    obstaculos* obstaculo = new obstaculos();
//    if(true)
//    {
//    contador++;
//    scene->addItem(obstaculo); //se coloca en la escena para que sea mostrada
//    qDebug();
//    }
