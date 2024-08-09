#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "circularwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CircularWidget*  circ = new CircularWidget(this);
    circ->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
