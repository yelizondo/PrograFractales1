#include "sierpinskicurve.h"
#include <simplelist.h>
SierpinskiCurve::SierpinskiCurve()
{

}

SimpleList<char> *SierpinskiCurve::generateList(int pIterations)
{
    SimpleList<char> *fractal = new SimpleList<char>();
   /* int temporal = 0;
        SimpleList<char> *Ies = new SimpleList<char>();
        Ies->insertEnd('I');
        Ies->insertEnd('I');
        SimpleList<char> *Des = new SimpleList<char>();
        Des->insertEnd('D');
        Des->insertEnd('D');
        int contador = 0;
        while (contador <= pIterations)
        {
            if (fractal->isEmpty())
                fractal->addList(Des);
            else if (fractal->getPos(0)->getValue() == 'D')
            {
                int pos = 0;
                int temporal = fractal->length();
                while (temporal-- >= 0)
                {
                    if (pos % 2 == 1)
                    {
                        fractal->insertPos(pos,'D');
                        pos++;
                        fractal->insertPos(pos,'D');
                        pos += 2;
                    }
                    else if (pos % 2 == 0 || pos == 0)
                    {
                        fractal->insertPos(pos,'I');
                        pos++;
                        fractal->insertPos(pos, 'I');
                        pos += 2;
                    }
                    else
                    {
                        cout << "NO FUNCIONA 1" << endl;
                    }
                }
            }
            else if (fractal->getPos(0)->getValue() == 'I')
            {
                int soap = 0;
                int temporal = fractal->length();
                while (temporal-- >= 0)
                {
                    if (soap % 2 == 1)
                    {
                        fractal->insertPos(soap, 'I');
                        soap++;
                        fractal->insertPos(soap, 'I');
                        soap += 2;
                    }
                    else if (soap % 2 == 0 || soap == 0)
                    {
                        fractal->insertPos(soap, 'D');
                        soap++;
                        fractal->insertPos(soap, 'D');
                        soap += 2;
                    }
                    else
                    {
                        cout << "No funciona 2" << endl;
                    }
                }
            }
            else
            {
                cout << "No funciona" << endl;
            }
            contador += 1;
            cout << contador << endl;
        }
        fractal->print();*/
        return fractal;
}

