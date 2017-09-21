#ifndef SIERPINSKICURVE_H
#define SIERPINSKICURVE_H
#include "simplelist.h"


class SierpinskiCurve
{
public:
    SierpinskiCurve();
    SimpleList<char> *generateList(int pIterations);
};

#endif // SIERPINSKICURVE_H
