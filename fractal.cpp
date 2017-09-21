#include "fractal.h"

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

    switch (pFractal)
    {
        case 'D': // Dragon Curve

            for (int i = 0; i < pList->length(); i++)
            {
                if (pList->getPos(i)->getValue() == 'I') {
                    res.append(addLine(90)); cout << 'I' << endl;}
                else
                    if (pList->getPos(i)->getValue() == 'D') {
                        res.append(addLine(90)); cout << 'D' << endl;}
            }

            break;

        case 'L': // LevyC Curve


            break;

        case 'S': // Sierpinski Curve


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
