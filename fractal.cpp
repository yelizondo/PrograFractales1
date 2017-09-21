#include "fractal.h"
#include <QLine>;
Fractal::Fractal()
{
    this->tempPoint.setX(30);
    this->tempPoint.setY(30);
    this->tempPointB.setX(50);
    this->tempPointB.setY(30);
}

QVector<QLineF> Fractal::generateGraphics(char pFractal, SimpleList<char> *pList)
{
    QVector<QLineF> res; // Lineas a dibujar
    QLineF line1,line2;
    int inicioX=750;
    int inicioY=450;
    int angulo=0;
    line1.setLine(inicioX,inicioY,inicioX+8,inicioY);

    switch (pFractal)
    {

        case 'D': // Dragon Curve

            for (int i = 0; i < pList->length(); i++)
            {
                if (pList->getPos(i)->getValue() == 'I') {
                    angulo=angulo+90;
                    line1.setAngle(angulo);
                    res.append(line1);

                }
                else
                    if (pList->getPos(i)->getValue() == 'D') {
                        angulo=angulo-90;
                        line1.setAngle(angulo);
                        res.append(line1);

                    }
                line2.setLine(line1.p2().rx(),line1.p2().ry(),line1.p2().rx()+3,line1.p2().ry());
                line1=line2;
            }

            break;

        case 'L': // LevyC Curve
        for (int i = 0; i < pList->length(); i++)
        {
            if (pList->getPos(i)->getValue() == 'I') {
                angulo=angulo+45;
                line1.setAngle(angulo);


            }
            else
                if (pList->getPos(i)->getValue() == 'D') {
                    angulo=angulo-45;
                    line1.setAngle(angulo);


                }
                else{
                    res.append(line1);
                    line2.setLine(line1.p2().rx(),line1.p2().ry(),line1.p2().rx()+8,line1.p2().ry());
                    line1=line2;
                }

        }



            break;

        case 'S': // Sierpinski Curve
        res.append(line1);
        line2.setLine(line1.p2().rx(),line1.p2().ry(),line1.p2().rx()+0.5,line1.p2().ry());
        line1=line2;
        for (int i = 0; i < pList->length(); i++)
        {
                if (pList->getPos(i)->getValue() == 'I') {
                    angulo=angulo+60;
                    line1.setAngle(angulo);
                    res.append(line1);

                }
                else
                    if (pList->getPos(i)->getValue() == 'D') {
                        angulo=angulo-60;
                        line1.setAngle(angulo);
                        res.append(line1);

                    }
                line2.setLine(line1.p2().rx(),line1.p2().ry(),line1.p2().rx()+0.5,line1.p2().ry());
                line1=line2;
         }

            break;

        default:
            break;
    }

    return res;
}

QLineF Fractal::addLine(int pAngle)
{
    QLineF res;

    res.setLine(tempPoint.rx(), tempPoint.ry(), tempPointB.rx(), tempPointB.ry());
    res.setAngle(pAngle);
    this->tempPoint.setX(tempPointB.rx());
    this->tempPoint.setY(tempPointB.ry());

    this->tempPointB.setX(res.p2().rx());
    this->tempPointB.setY(res.p2().ry());

    return res;
}
