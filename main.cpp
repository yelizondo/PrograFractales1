#include "mainwindow.h"
#include <QApplication>
#include "fractal.h"
#include "levyccurve.h"
#include "simplelist.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    SimpleList<char> *d = new SimpleList<char>();

    d->insertEnd('a');
    d->insertEnd('b');
    d->insertEnd('c');
    d->insertEnd('d');


    SimpleList<char> *f = new SimpleList<char>();

    d->insertEnd('e');
    d->insertEnd('f');
    d->insertEnd('g');
    d->insertEnd('h');

    d = d->addList(f);
    d->print();



   // LevyCCurve *f = new LevyCCurve();

   // f->generateList(4);

    return a.exec();
}
