#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QDebug>
#include <Qpushbutton>
#include <QMessageBox>
#include <QKeyEvent>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


   // new QPushButton =

    setObjectName("Openmenu");

    setStyleSheet("#Openmenu{border-image:url(:/man.jpg)}");
    showFullScreen();
    ui->StartButton->setStyleSheet("#StartButton{border-image:url(:/g22o.png)}");
    ui->StartButton->showFullScreen();

    for (i=0;i<10;i++)
       a[i] = (rand() % 2000+1) + 2000;

   // ui->face->hide();


    connect(ui->StartButton,SIGNAL(clicked()),
            ui->StartButton,SLOT(close()));



}


void MainWindow::MySlot()
{
    for (i=0;i<10;i++)
        a[i] = a[i] - 5;


    ui->face0->setGeometry(a[0],250,191,161);
    ui->face1->setGeometry(a[1],250,191,161);
    ui->face2->setGeometry(a[2],250,191,161);
    ui->face3->setGeometry(a[3],250,191,161);
    ui->face4->setGeometry(a[4],250,191,161);
    ui->face5->setGeometry(a[5],250,191,161);
    ui->face6->setGeometry(a[6],250,191,161);
    ui->face7->setGeometry(a[7],250,191,161);
    ui->face8->setGeometry(a[8],250,191,161);
    ui->face9->setGeometry(a[9],250,191,161);


}


MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_StartButton_clicked()
{

    setStyleSheet("#Openmenu{border-image:url(:/interf.jpg)}");
    ui->face0->setStyleSheet("#face0{border-image:url(:/face.png)}");
    ui->face1->setStyleSheet("#face1{border-image:url(:/face.png)}");
    ui->face2->setStyleSheet("#face2{border-image:url(:/face.png)}");
    ui->face3->setStyleSheet("#face3{border-image:url(:/face.png)}");
    ui->face4->setStyleSheet("#face4{border-image:url(:/face.png)}");
    ui->face5->setStyleSheet("#face5{border-image:url(:/face.png)}");
    ui->face6->setStyleSheet("#face6{border-image:url(:/face.png)}");
    ui->face7->setStyleSheet("#face7{border-image:url(:/face.png)}");
    ui->face8->setStyleSheet("#face8{border-image:url(:/face.png)}");
    ui->face9->setStyleSheet("#face9{border-image:url(:/face.png)}");


    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(MySlot()));
    timer->start(10);

}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event -> key() == Qt::Key_U)
    {
            if (a[0] <=400)
               ui->face0->hide();
            if (a[1] <=400)
               ui->face1->hide();
            if (a[2] <=400)
               ui->face2->hide();
            if (a[3] <=400)
               ui->face3->hide();
            if (a[4] <=400)
               ui->face4->hide();
            if (a[5] <=400)
               ui->face5->hide();
            if (a[6] <=400)
               ui->face6->hide();
            if (a[7] <=400)
               ui->face7->hide();
            if (a[8] <=400)
               ui->face8->hide();
            if (a[9] <=400)
               ui->face9->hide();

    }
}

