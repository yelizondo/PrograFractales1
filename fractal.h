#ifndef FRACTAL_H
#define FRACTAL_H
#include "simplelist.h"
#include <QVector>
#include <QLineF>


class Fractal
{
    public:
        Fractal(){}
        QVector<QLineF> generateGraphics(char,SimpleList<char>*);
};

#endif // FRACTAL_H
