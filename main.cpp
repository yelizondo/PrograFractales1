#include "mainwindow.h"
#include <QApplication>
#include "fractal.h"
#include "levyccurve.h"
#include "simplelist.h"
#include "sierpinskicurve.h"
#include "dragoncurve.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    //DragonCurve *d = new DragonCurve();
    //d->generateList(1)->print();
    w.show();

    //SimpleList<char> *s = new SimpleList<char>();
   // s->insertEnd('a');
    //s->insertEnd('b');
    //s->insertEnd('c');

    //s = s->invertir();
    //s->print();

    //SierpinskiCurve *d = new SierpinskiCurve();
    //d->generateList(30);




    return a.exec();
}
