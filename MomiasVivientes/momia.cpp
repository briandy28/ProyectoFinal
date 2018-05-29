#include "momia.h"

momia::momia(QObject *parent) : QObject(parent)
{
    PX=10;
    PY=350;
    setPos(PX,PY);
    setPixmap(QPixmap(":/rexi.png"));
}

void momia::mover(float dt)
{
    PX=PX+8;
    setPos(PX,PY);
    if (PX == 0)
    {
        scene()->removeItem(this);
        delete this;
    }
}

void momia::saltar(float dt)
{
    PY = PY -35*dt + 20*dt*dt ;
        setPos(PY,PX);
}
