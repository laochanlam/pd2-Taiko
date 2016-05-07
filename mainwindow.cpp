#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QDebug>
#include <Qpushbutton>
#include <QMessageBox>





MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    showFullScreen();





    setObjectName("Openmenu");


    setStyleSheet("#Openmenu{border-image:url(D:/Qt/Repository/P/Reference/website/man.jpg)}");
    ui->StartButton->showFullScreen();


    ui->face->hide();


    connect(ui->StartButton,SIGNAL(clicked()),
            ui->StartButton,SLOT(close()));





}


void MainWindow::MySlot()
{

    coor[i] = coor[i] - 5;
    if (i>=345)
    ui->face->setGeometry(i,250,191,161);
    ui->face->show();


}


MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_StartButton_clicked()
{

    setStyleSheet("#Openmenu{border-image:url(D:/Qt/Repository/P/Reference/website/interf.jpg)}");
    ui->face->setStyleSheet("#face{border-image:url(D:/Qt/Repository/P/Reference/website/face.png)}");


    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(MySlot()));
    timer->start(10);

}


