#ifndef FRACTAL_H
#define FRACTAL_H
#include "simplelist.h"

class Fractal
{
    public:
        Fractal(){}
        SimpleList<char>* generateList(int pIterations);
};

#endif // FRACTAL_H
