#ifndef ESFERA_H
#define ESFERA_H

#include <QObject>
#include <QGraphicsPixmapItem>

class esfera : public QObject, public QGraphicsPixmapItem
{
public:
    esfera(int width, int heigth);
    int get_h();

private:
    int w,h;
};

#endif // ESFERA_H
