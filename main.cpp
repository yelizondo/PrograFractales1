#include "mainwindow.h"
#include <QApplication>
#include "fractal.h"
#include "levyccurve.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    /*LevyCCurve *f = new LevyCCurve();

    f->generateList(4);
*/
    return a.exec();

}



