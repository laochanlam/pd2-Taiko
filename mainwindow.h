#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDebug>
#include <QtCore>
#include <QMainWindow>
#include <Qpushbutton>
#include <QLabel>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


    int score;
    bool test;
    bool colour;
    double playtime;
    double speed;



private slots:

    void on_StartButton_clicked();
    void MySlot();


    void on_Back_clicked();

private:

    void keyPressEvent(QKeyEvent *);
    Ui::MainWindow *ui;

    int i,j,k;
    int a[10];
    QTimer *timer;
    QTimer *kicktimer;
};

#endif // MAINWINDOW_H
