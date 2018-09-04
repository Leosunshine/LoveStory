#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>
#include <QDebug>
#include <QDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Like");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_pressed()
{

}


void MainWindow::on_pushButton_2_clicked()
{
    QDialog *qd = new QDialog(this);
    qd->setSizeIncrement(200,200);
    QLabel *label = new QLabel(qd);
    label->setText("我也喜欢你^_^");
    qd->show();
}

void MainWindow::on_pushButton_pressed(){

}
