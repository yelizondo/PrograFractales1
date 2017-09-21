#ifndef FRACTAL_H
#define FRACTAL_H
#include "simplelist.h"
#include <QLine>
#include <QWidget>
#include <QtGui>
#include <QtCore>
#include <QVector>

class Fractal
{
    public:
        Fractal(){}
        QVector<QLineF> generateGraphics(char pFractal,SimpleList<char>* fractales){
            QVector<QLineF> res;
            QLineF l1;
            QLineF l2;
            QLineF l3;
            QLineF l4;
            l1.setLine(50,50,100,100);
            l1.setAngle(-45);
            l2.setLine(l1.p2().rx(),l1.p2().ry(),400,350);
            l3.setLine(l2.p2().rx(),l2.p2().ry(),323,259);
            l4.setLine(l3.p2().rx(),l3.p2().ry(),523,123);
            res.append(l1);
            res.append(l2);
            res.append(l3);
            res.append(l4);
            return res;




        }
};

#endif // FRACTAL_H
