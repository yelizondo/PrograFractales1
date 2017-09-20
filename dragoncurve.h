#ifndef DRAGONCURVE_H
#define DRAGONCURVE_H
#include "fractal.h"

class DragonCurve : public Fractal
{
public:
    DragonCurve();
    SimpleList<char> *generateList(int pIterations);
};

#endif // DRAGONCURVE_H
