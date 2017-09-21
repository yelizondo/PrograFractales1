#include "dibujofrac.h"
#include "ui_dibujofrac.h"
#include <QLine>
#include <iostream>
#include <fractal.h>
#include <QVector>
#include <unistd.h>

DibujoFrac::DibujoFrac(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DibujoFrac)
{
    ui->setupUi(this);
}

DibujoFrac::~DibujoFrac()
{
    delete ui;
}

void DibujoFrac::paintEvent(QPaintEvent *e){

    QPainter painter(this);

    painter.drawLines(lista);

}
