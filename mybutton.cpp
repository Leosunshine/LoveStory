#include "mybutton.h"
#include <QDebug>
MyButton::MyButton(QWidget *parent) : QPushButton(parent)
{
    this->setMouseTracking(true);
}

void MyButton::mouseMoveEvent(QMouseEvent *e){
    int xo1 = this->pos().rx();
    int yo1 = this->pos().ry();
    int wo1 = this->size().width();
    int ho1 = this->size().height();

    int xo2 = 260;
    int yo2 = 130;
    int wo2 = 75;
    int ho2 = 23;

    while(true){
        int xn = rand() % 300;
        int yn = rand() % 200;
        if(xn >= xo1 - wo1 && xn <= xo1 + wo1 && yn >= yo1 - ho1 && yn <= yo1 + ho1){
            continue;
        }
        if(xn >= xo2 - wo2 && xn <= xo2 + wo2 && yn >= yo2 - ho2 && yn <= yo2 + ho2){
            continue;
        }
        this->move(xn,yn);
        break;
    }
}
