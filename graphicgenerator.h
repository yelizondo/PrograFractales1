#ifndef GRAPHICGENERATOR_H
#define GRAPHICGENERATOR_H
#include "simplelist.h"
#include <QDialog>


class GraphicGenerator
{
    public:
        GraphicGenerator();
        void generateGraphic(char pFrac, SimpleList<char>*, QWidget*);
};

#endif // GRAPHICGENERATOR_H
