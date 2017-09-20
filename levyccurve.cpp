#include "levyccurve.h"
#include "simplelist.h"

LevyCCurve::LevyCCurve()
{

}

SimpleList<char> *LevyCCurve::generateList(int pIterations)
{
    SimpleList<char> *fractal = new SimpleList<char>();

    fractal->insertEnd('A');

    for(int i = 0; i < pIterations; i++)
    {
        SimpleList<char> *frac = new SimpleList<char>();
        frac->insertBeg('D');
        LSNode<char>* aux = fractal->getFirst();

        for(int j = 0; j < fractal->length(); j++)
        {
            //E elem = aux->getValue();
            frac->insertEnd(aux->getValue());
            aux = aux->getNext();
        }

        frac->insertEnd('I');
        frac->insertEnd('I');
        aux = fractal->getFirst();

        for(int x = 0; x < fractal->length(); x++)
        {
            frac->insertEnd(aux->getValue());
            aux = aux->getNext();
        }
        frac->insertEnd('D');
        fractal = frac;
    }

    fractal->print();
    return fractal;
}
