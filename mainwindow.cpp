#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dibujofrac.h"
#include <iostream>
#include <QLine>
#include <fractal.h>
#include <levyccurve.h>
#include <sierpinskicurve.h>
#include <dragoncurve.h>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_dra_clicked()
{
    Fractal frac;
    DragonCurve listaPi;
    ventana.lista=frac.generateGraphics('D',listaPi.generateList(ui->itera->value()),ui->itera->value());
    ventana.show();
}

void MainWindow::on_sier_clicked()
{
    Fractal frac;
    SierpinskiCurve listaPi;
    ventana.lista=frac.generateGraphics('S',listaPi.generateList(ui->itera->value()),ui->itera->value());
    ventana.show();
}

void MainWindow::on_levy_clicked()
{
    Fractal frac;
    LevyCCurve listaPi;
    ventana.lista=frac.generateGraphics('L',listaPi.generateList(ui->itera->value()),ui->itera->value());
    ventana.show();
}

