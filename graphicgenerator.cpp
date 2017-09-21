#include "graphicgenerator.h"

GraphicGenerator::GraphicGenerator()
{

}

void GraphicGenerator::generateGraphic(char pFractal, SimpleList<char> * pList, QWidget * pWidget)
{
    switch (pFractal)
    {
        case 'D': // Dragon Curve

            for (int i = 0; i < pList->length(); i++)
            {

            }

            break;

        case 'L': // LevyC Curve

            for (int i = 0; i < pList->length(); i++)
            {

            }
            break;

        case 'S': // Sierpinski Curve

            for (int i = 0; i < pList->length(); i++)
            {

            }
            break;

        default:
            break;
    }
}
