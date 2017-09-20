#include "dragoncurve.h"
#include "simplelist.h"

DragonCurve::DragonCurve()
{

}

SimpleList<char> *DragonCurve::generateList(int pIterations)
{
    if (pIterations == 0)
        return new SimpleList<char>;
    else
    {
        SimpleList<char> * c = generateList(pIterations-1);
        SimpleList<char> * r = c->invertir();
        SimpleList<char> * i = new SimpleList<char>();

        for (int j = 0; j < r->length(); j++)
        {
            if (r->getPos(j)->getValue() == 'D')
                i->insertEnd('I');
            else
                i->insertEnd('D');
        }
        SimpleList<char> * res = new SimpleList<char>;

        res = res->concatenarListas(c,'I',i);
        res->print();
        return res;
    }
}
