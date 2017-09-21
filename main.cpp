#include "mainwindow.h"
#include <QApplication>
#include "fractal.h"
#include "levyccurve.h"
#include "simplelist.h"
#include "sierpinskicurve.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();

    SierpinskiCurve *d = new SierpinskiCurve();
    d->generateList(30);




    return a.exec();
}
