#include "esfera.h"

esfera::esfera(int width, int heigth)
{
    QPixmap j(":/Pelota.jpeg");
    h = heigth;
    w = width;
    setPixmap(j.scaled(w,h));
}

int esfera::get_h()
{
    return h;
}
