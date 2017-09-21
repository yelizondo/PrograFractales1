#include "sierpinskicurve.h"

SierpinskiCurve::SierpinskiCurve()
{

}

SimpleList<char> *SierpinskiCurve::generateList(int pIterations)
{
    SimpleList<char> *fractal = new SimpleList<char>();

    int temporal = 0;

    SimpleList<char> *Ies = new SimpleList<char>();
    Ies->insertEnd('I');
    Ies->insertEnd('I');
    SimpleList<char> *Des = new SimpleList<char>();

    int contador = 0;

    while (contador <= pIterations)
    {
        if (fractal->isEmpty())
            fractal = fractal->addList(Des)

    }
}
