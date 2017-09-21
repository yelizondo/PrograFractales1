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
protected:
    void paintEvent(QPaintEvent* e);
private:
    Ui::DibujoFrac *ui;
};

#endif // DIBUJOFRAC_H
