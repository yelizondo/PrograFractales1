#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <dibujofrac.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_dra_clicked();

    void on_sier_clicked();
    
    void on_levy_clicked();

private:
    DibujoFrac ventana;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
