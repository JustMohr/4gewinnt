#include "steuerung.h"

Steuerung::Steuerung(QWidget *parent) : QWidget(parent)
{
    this->setPalette(Qt::blue);
    this->setAutoFillBackground(true);
    this->resize(680,480);
    for(int b=0;b<6 ;b++){
        for(int t=0;t<7;t++){
            baum[t][b]=NULL;
        }
    }

    for(int y=0; y<6; y++)
    {
        for(int x=0; x<7; x++)
        {
            label[x]= new QLabel("",this);
            label[x]->resize(60,60);
            label[x]->move(10+x*100,10+y*80);
            //qDebug() << "x:" << x;
            label[x]->setPalette(Qt::white);
            label[x]->setAutoFillBackground(true);
            //qDebug() << "x=" << x << "  y=" << y;
        }
    }

    //gelbe led's
    for(int z=0;z<21;z++)
    {
        led[z] = new BLed(Qt::yellow,this);
        led[z]->setGeometry(50,50,50,50);
        led[z]->move(14,15);
        led[z]->hide();
    }
    //rot led's
    for(int z=21;z<42;z++)
    {
        led[z] = new BLed(Qt::red,this);
        led[z]->setGeometry(50,50,50,50);
        led[z]->move(z*5,55);
        led[z]->hide();
    }
}


Steuerung::~Steuerung()
{
}


void Steuerung::mousePressEvent(QMouseEvent* e)
{
    //qDebug() << e->x();
    qDebug() << e->y();
    int x = e->x();
    if(x>10 and x<70)
    {
        if (isYellow==true){
            qDebug() << "Spalte 1";
            //led->move(10,20);
            for(int i=0;i<6;i++){
                if(baum[0][i]!=NULL)
                {
                    baum[0][i-1] = new BLed(Qt::yellow,this);
                    baum[0][i-1]->setGeometry(14,15+(i-1)*80,50,50);
                    baum[0][i-1]->show();
                    isYellow=false;
                    return;
                }
            }
            baum[0][5] = new BLed(Qt::yellow,this);
            baum[0][5]->setGeometry(14,15+5*80,50,50);
            baum[0][5]->show();
            isYellow=false;

        }else {


            qDebug() << "Spalte 1";
            //led->move(10,20);
            for(int i=0;i<6;i++){
                if(baum[0][i]!=NULL)
                {
                    baum[0][i-1] = new BLed(Qt::red,this);
                    baum[0][i-1]->setGeometry(14,15+(i-1)*80,50,50);
                    baum[0][i-1]->show();
                    isYellow=true;
                    return;
                }
            }
            baum[0][5] = new BLed(Qt::red,this);
            baum[0][5]->setGeometry(14,15+5*80,50,50);
            baum[0][5]->show();
            isYellow=true;
        }
    }

    if(x>110 and x<170)
    {
        if(isYellow==true){
            qDebug() << "Spalte 2";
            //led->move(10,20);
            for(int i=0;i<6;i++){
                if(baum[1][i]!=NULL)
                {
                    baum[1][i-1] = new BLed(Qt::yellow,this);
                    baum[1][i-1]->setGeometry(114,15+(i-1)*80,50,50);
                    baum[1][i-1]->show();
                    isYellow=false;
                    return;
                }
            }
            baum[1][5] = new BLed(Qt::yellow,this);
            baum[1][5]->setGeometry(114,15+5*80,50,50);
            baum[1][5]->show();
            isYellow=false;
        }else {
            qDebug() << "Spalte 2";
            //led->move(10,20);
            for(int i=0;i<6;i++){
                if(baum[1][i]!=NULL)
                {
                    baum[1][i-1] = new BLed(Qt::red,this);
                    baum[1][i-1]->setGeometry(114,15+(i-1)*80,50,50);
                    baum[1][i-1]->show();
                    isYellow=true;
                    return;
                }
            }
            baum[1][5] = new BLed(Qt::red,this);
            baum[1][5]->setGeometry(114,15+5*80,50,50);
            baum[1][5]->show();
            isYellow=true;
        }
    }


    if(x>210 and x<270)
    {
        if(isYellow==true){
            qDebug() << "Spalte 3";
            for(int i=0;i<6;i++){
                if(baum[2][i]!=NULL)
                {
                    baum[2][i-1] = new BLed(Qt::yellow,this);
                    baum[2][i-1]->setGeometry(214,15+(i-1)*80,50,50);
                    baum[2][i-1]->show();
                    isYellow=false;
                    return;
                }
            }
            baum[2][5] = new BLed(Qt::yellow,this);
            baum[2][5]->setGeometry(214,15+5*80,50,50);
            baum[2][5]->show();
            isYellow=false;
        }else {

            qDebug() << "Spalte 3";
            for(int i=0;i<6;i++){
                if(baum[2][i]!=NULL)
                {
                    baum[2][i-1] = new BLed(Qt::red,this);
                    baum[2][i-1]->setGeometry(214,15+(i-1)*80,50,50);
                    baum[2][i-1]->show();
                    isYellow=true;
                    return;
                }
            }
            baum[2][5] = new BLed(Qt::red,this);
            baum[2][5]->setGeometry(214,15+5*80,50,50);
            baum[2][5]->show();
            isYellow=true;
        }
    }

    if(x>310 and x<370)
    {
        if(isYellow==true){
            qDebug() << "Spalte 4";
            //led->move(10,20);
            for(int i=0;i<6;i++){
                if(baum[3][i]!=NULL)
                {
                    baum[3][i-1] = new BLed(Qt::yellow,this);
                    baum[3][i-1]->setGeometry(314,15+(i-1)*80,50,50);
                    baum[3][i-1]->show();
                    isYellow=false;
                    return;
                }
            }
            baum[3][5] = new BLed(Qt::yellow,this);
            baum[3][5]->setGeometry(314,15+5*80,50,50);
            baum[3][5]->show();
            isYellow=false;
        }else {

            qDebug() << "Spalte 4";
            //led->move(10,20);
            for(int i=0;i<6;i++){
                if(baum[3][i]!=NULL)
                {
                    baum[3][i-1] = new BLed(Qt::red,this);
                    baum[3][i-1]->setGeometry(314,15+(i-1)*80,50,50);
                    baum[3][i-1]->show();
                    isYellow=true;
                    return;
                }
            }
            baum[3][5] = new BLed(Qt::red,this);
            baum[3][5]->setGeometry(314,15+5*80,50,50);
            baum[3][5]->show();
            isYellow=true;
        }
        //led->show();
    }

    if(x>410 and x<470)
    {
        if(isYellow==true){
            qDebug() << "Spalte 5";
            //led->move(10,20);
            for(int i=0;i<6;i++){
                if(baum[4][i]!=NULL)
                {
                    baum[4][i-1] = new BLed(Qt::yellow,this);
                    baum[4][i-1]->setGeometry(414,15+(i-1)*80,50,50);
                    baum[4][i-1]->show();
                    isYellow=false;
                    return;
                }
            }
            baum[4][5] = new BLed(Qt::yellow,this);
            baum[4][5]->setGeometry(414,15+5*80,50,50);
            baum[4][5]->show();
            isYellow=false;
        }else {

            qDebug() << "Spalte 5";
            //led->move(10,20);
            for(int i=0;i<6;i++){
                if(baum[4][i]!=NULL)
                {
                    baum[4][i-1] = new BLed(Qt::red,this);
                    baum[4][i-1]->setGeometry(414,15+(i-1)*80,50,50);
                    baum[4][i-1]->show();
                    isYellow=true;
                    return;
                }
            }
            baum[4][5] = new BLed(Qt::red,this);
            baum[4][5]->setGeometry(414,15+5*80,50,50);
            baum[4][5]->show();
            isYellow=true;
        }
        //led->show();
    }

    if(x>510 and x<570)
    {
        if(isYellow==true){
            qDebug() << "Spalte 6";
            //led->move(10,20);
            for(int i=0;i<6;i++){
                if(baum[5][i]!=NULL)
                {
                    baum[5][i-1] = new BLed(Qt::yellow,this);
                    baum[5][i-1]->setGeometry(514,15+(i-1)*80,50,50);
                    baum[5][i-1]->show();
                    isYellow=false;
                    return;
                }
            }
            baum[5][5] = new BLed(Qt::yellow,this);
            baum[5][5]->setGeometry(514,15+5*80,50,50);
            baum[5][5]->show();
            isYellow=false;
        }else {

            qDebug() << "Spalte 6";
            //led->move(10,20);
            for(int i=0;i<6;i++){
                if(baum[5][i]!=NULL)
                {
                    baum[5][i-1] = new BLed(Qt::red,this);
                    baum[5][i-1]->setGeometry(514,15+(i-1)*80,50,50);
                    baum[5][i-1]->show();
                    isYellow=true;
                    return;
                }
            }
            baum[5][5] = new BLed(Qt::red,this);
            baum[5][5]->setGeometry(514,15+5*80,50,50);
            baum[5][5]->show();
            isYellow=true;
        }
    }


    if(x>610 and x<670)
    {
        if(isYellow==true){
            qDebug() << "Spalte 7";
            //led->move(10,20);
            for(int i=0;i<6;i++){
                if(baum[6][i]!=NULL)
                {
                    baum[6][i-1] = new BLed(Qt::yellow,this);
                    baum[6][i-1]->setGeometry(614,15+(i-1)*80,50,50);
                    baum[6][i-1]->show();
                    isYellow=false;
                    return;
                }
            }
            baum[6][5] = new BLed(Qt::yellow,this);
            baum[6][5]->setGeometry(614,15+5*80,50,50);
            baum[6][5]->show();
            isYellow=false;
        }else {
            qDebug() << "Spalte 7";
            //led->move(10,20);
            for(int i=0;i<6;i++){
                if(baum[6][i]!=NULL)
                {
                    baum[6][i-1] = new BLed(Qt::red,this);
                    baum[6][i-1]->setGeometry(614,15+(i-1)*80,50,50);
                    baum[6][i-1]->show();
                    isYellow=true;
                    return;
                }
            }
            baum[6][5] = new BLed(Qt::red,this);
            baum[6][5]->setGeometry(614,15+5*80,50,50);
            baum[6][5]->show();
            isYellow=true;
        }
        //led->show();
    }
    qDebug() << e->y();


}




