#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDebug>
#include <QtCore>
#include <QMainWindow>
#include <Qpushbutton>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QTimer *timer;

    int i;
    int a[10];




private slots:
    void on_StartButton_clicked();

    void MySlot();


private:
    void keyPressEvent(QKeyEvent *);
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H