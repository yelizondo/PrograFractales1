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


    switch (pFractal)
    {

        case 'D': // Dragon Curve

            inicioX = 750;
            inicioY = 225;
            angulo = 0;
            line1.setLine(inicioX,inicioY,inicioX+5,inicioY);

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
                line2.setLine(line1.p2().rx(),line1.p2().ry(),line1.p2().rx()+5,line1.p2().ry());
                line1=line2;
            }

            break;

        case 'L': // LevyC Curve

            inicioX = 375;
            inicioY = 225;
            angulo = 0;
            line1.setLine(inicioX,inicioY,inicioX+8,inicioY);

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

            inicioX = 750;
            inicioY = 450;
            angulo = 0;
            line1.setLine(inicioX,inicioY,inicioX+2,inicioY);

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
                    line2.setLine(line1.p2().rx(),line1.p2().ry(),line1.p2().rx()+2,line1.p2().ry());
                    line1=line2;
             }

            break;

        default:
            break;
    }

    return res;
}

