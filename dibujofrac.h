#ifndef DIBUJOFRAC_H
#define DIBUJOFRAC_H

#include <QWidget>
#include <QtGui>
#include <QtCore>
#include <simplelist.h>
#include <QVector>
#include <QLine>
namespace Ui {
class DibujoFrac;
}

class DibujoFrac : public QWidget
{
    Q_OBJECT

public:

    explicit DibujoFrac(QWidget *parent = 0);
    ~DibujoFrac();
    QVector<QLineF> lista;
    //SimpleList<char> lista;
    //char fractal;
protected:
    void paintEvent(QPaintEvent* e);
    //int iteraciones;
    //char fractal;
private:

    Ui::DibujoFrac *ui;
};

#endif // DIBUJOFRAC_H
