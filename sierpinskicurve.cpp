#include "sierpinskicurve.h"

SierpinskiCurve::SierpinskiCurve()
{

}

SimpleList<char> *SierpinskiCurve::generateList(int pIterations)
{
    SimpleList<char> *fractal = new SimpleList<char>();

    fractal->insertEnd('D');
    fractal->insertEnd('D');

    for(int i = 0; i < pIterations; i++)
    {
       SimpleList<char> *frac = new SimpleList<char>();
       int num=0;
       if (fractal->getPos(0)->getValue()== 'I'){
           num++;
       }
        LSNode<char>* aux = fractal->getFirst();
       for(int j = 0; j < fractal->length(); j++)
       {
           if(num % 2==0){
               frac->insertEnd('I');
               frac->insertEnd('I');
           }
           else{
               frac->insertEnd('D');
               frac->insertEnd('D');
           }

           frac->insertEnd(aux->getValue());
           aux=aux->getNext();
           num++;
       }
       if(num % 2==0){
           frac->insertEnd('I');
           frac->insertEnd('I');
       }
       else{
           frac->insertEnd('D');
           frac->insertEnd('D');
       }

       fractal = frac;

    }
    fractal->print();
    return fractal;
}
