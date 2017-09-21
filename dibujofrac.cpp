#include "dibujofrac.h"
#include "ui_dibujofrac.h"
#include <QLine>
#include <iostream>
#include <fractal.h>
#include <QVector>

dibujofrac::dibujofrac(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dibujofrac)
{
    ui->setupUi(this);
}

dibujofrac::~dibujofrac()
{
    delete ui;
}

void DibujoFrac::paintEvent(QPaintEvent *e){

    QPainter painter(this);
    painter.drawLines(lista);

}
