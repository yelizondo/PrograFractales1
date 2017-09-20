#ifndef LEVYCCURVE_H
#define LEVYCCURVE_H
#include "simplelist.h"
#include "fractal.h"


class LevyCCurve : public Fractal
{
    public:
        LevyCCurve();
        SimpleList<char> *generateList(int pIterations);


};

#endif // LEVYCCURVE_H
