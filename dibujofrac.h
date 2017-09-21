#ifndef DIBUJOFRAC_H
#define DIBUJOFRAC_H

#include <QWidget>
#include <QtGui>
#include <QtCore>
#include <simplelist.h>
#include <QVector>
#include <QLine>

namespace Ui {
class dibujofrac;
}

class dibujofrac : public QWidget
{
    Q_OBJECT

public:
    explicit dibujofrac(QWidget *parent = 0);
    ~dibujofrac();
    QVector<QLineF> lista;
protected:
    void paintEvent(QPaintEvent *e);

private:
    Ui::dibujofrac *ui;
};

#endif // DIBUJOFRAC_H
