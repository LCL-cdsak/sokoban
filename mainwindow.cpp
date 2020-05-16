#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QKeyEvent>
#include <QGraphicsItem>
#include <QWidget>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(pushButton_5()));
    foot = 0;
    ui->label_5->setNum(foot);
    ui->label_6->setNum(foot);
    ui->stackedWidget->setCurrentIndex(3);
}
MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::if_there_is_an_wall(int x,int y)
{
    int flag = ui->stackedWidget->currentIndex();
    switch (flag){
    case 0:{
    if((y==ui->label2_1->y())&&(x==ui->label2_1->x()))
        return true;
    if((y==ui->label2_2->y())&&(x==ui->label2_2->x()))
        return true;
    if((y==ui->label2_3->y())&&(x==ui->label2_3->x()))
        return true;
    if((y==ui->label2_4->y())&&(x==ui->label2_4->x()))
        return true;
    if((y==ui->label2_5->y())&&(x==ui->label2_5->x()))
        return true;
    if((y==ui->label2_6->y())&&(x==ui->label2_6->x()))
        return true;
    if((y==ui->label2_7->y())&&(x==ui->label2_7->x()))
        return true;
    if((y==ui->label2_8->y())&&(x==ui->label2_8->x()))
       return true;
    if((y==ui->label2_9->y())&&(x==ui->label2_9->x()))
        return true;
    if((y==ui->label2_10->y())&&(x==ui->label2_10->x()))
        return true;
    if((y==ui->label2_11->y())&&(x==ui->label2_11->x()))
        return true;
    if((y==ui->label2_12->y())&&(x==ui->label2_12->x()))
        return true;
    if((y==ui->label2_13->y())&&(x==ui->label2_13->x()))
        return true;
    if((y==ui->label2_14->y())&&(x==ui->label2_14->x()))
        return true;
    if((y==ui->label2_15->y())&&(x==ui->label2_15->x()))
        return true;
    if((y==ui->label2_16->y())&&(x==ui->label2_16->x()))
        return true;
    if((y==ui->label2_17->y())&&(x==ui->label2_17->x()))
        return true;
    if((y==ui->label2_18->y())&&(x==ui->label2_18->x()))
        return true;
    if((y==ui->label2_19->y())&&(x==ui->label2_19->x()))
        return true;
    if((y==ui->label2_20->y())&&(x==ui->label2_20->x()))
        return true;
    if((y==ui->label2_21->y())&&(x==ui->label2_21->x()))
        return true;
    if((y==ui->label2_22->y())&&(x==ui->label2_22->x()))
        return true;
    if((y==ui->label2_23->y())&&(x==ui->label2_23->x()))
        return true;
    if((y==ui->label2_24->y())&&(x==ui->label2_24->x()))
        return true;
    if((y==ui->label2_25->y())&&(x==ui->label2_25->x()))
        return true;
    if((y==ui->label2_26->y())&&(x==ui->label2_26->x()))
        return true;
    if((y==ui->label2_27->y())&&(x==ui->label2_27->x()))
        return true;
    if((y==ui->label2_28->y())&&(x==ui->label2_28->x()))
        return true;
    if((y==ui->label2_29->y())&&(x==ui->label2_29->x()))
        return true;
    if((y==ui->label2_30->y())&&(x==ui->label2_30->x()))
        return true;
    if((y==ui->label2_31->y())&&(x==ui->label2_31->x()))
        return true;
    if((y==ui->label2_32->y())&&(x==ui->label2_32->x()))
        return true;
    if((y==ui->label2_33->y())&&(x==ui->label2_33->x()))
        return true;
    if((y==ui->label2_34->y())&&(x==ui->label2_34->x()))
        return true;
    if((y==ui->label2_35->y())&&(x==ui->label2_35->x()))
        return true;
    if((y==ui->label2_36->y())&&(x==ui->label2_36->x()))
        return true;
    }
        break;
    case 1:{
    if((y==ui->label2_37->y())&&(x==ui->label2_37->x()))
        return true;
    if((y==ui->label2_38->y())&&(x==ui->label2_38->x()))
        return true;
    if((y==ui->label2_39->y())&&(x==ui->label2_39->x()))
        return true;
    if((y==ui->label2_40->y())&&(x==ui->label2_40->x()))
        return true;
    if((y==ui->label2_41->y())&&(x==ui->label2_41->x()))
        return true;
    if((y==ui->label2_42->y())&&(x==ui->label2_42->x()))
        return true;
    if((y==ui->label2_43->y())&&(x==ui->label2_43->x()))
        return true;
    if((y==ui->label2_44->y())&&(x==ui->label2_44->x()))
       return true;
    if((y==ui->label2_45->y())&&(x==ui->label2_45->x()))
        return true;
    if((y==ui->label2_46->y())&&(x==ui->label2_46->x()))
        return true;
    if((y==ui->label2_47->y())&&(x==ui->label2_47->x()))
        return true;
    if((y==ui->label2_48->y())&&(x==ui->label2_48->x()))
        return true;
    if((y==ui->label2_49->y())&&(x==ui->label2_49->x()))
        return true;
    if((y==ui->label2_50->y())&&(x==ui->label2_50->x()))
        return true;
    if((y==ui->label2_51->y())&&(x==ui->label2_51->x()))
        return true;
    if((y==ui->label2_52->y())&&(x==ui->label2_52->x()))
        return true;
    if((y==ui->label2_53->y())&&(x==ui->label2_53->x()))
        return true;
    if((y==ui->label2_54->y())&&(x==ui->label2_54->x()))
        return true;
    if((y==ui->label2_55->y())&&(x==ui->label2_55->x()))
        return true;
    if((y==ui->label2_56->y())&&(x==ui->label2_56->x()))
        return true;
    if((y==ui->label2_57->y())&&(x==ui->label2_57->x()))
        return true;
    if((y==ui->label2_58->y())&&(x==ui->label2_58->x()))
        return true;
    if((y==ui->label2_59->y())&&(x==ui->label2_59->x()))
        return true;
    if((y==ui->label2_60->y())&&(x==ui->label2_60->x()))
        return true;
    if((y==ui->label2_61->y())&&(x==ui->label2_61->x()))
        return true;
    if((y==ui->label2_62->y())&&(x==ui->label2_62->x()))
        return true;
    if((y==ui->label2_63->y())&&(x==ui->label2_63->x()))
        return true;
    if((y==ui->label2_64->y())&&(x==ui->label2_64->x()))
        return true;
    if((y==ui->label2_65->y())&&(x==ui->label2_65->x()))
        return true;
    if((y==ui->label2_66->y())&&(x==ui->label2_66->x()))
        return true;
    if((y==ui->label2_67->y())&&(x==ui->label2_67->x()))
        return true;
    if((y==ui->label2_68->y())&&(x==ui->label2_68->x()))
        return true;
    if((y==ui->label2_69->y())&&(x==ui->label2_69->x()))
        return true;
    if((y==ui->label2_70->y())&&(x==ui->label2_70->x()))
        return true;
    if((y==ui->label2_71->y())&&(x==ui->label2_71->x()))
        return true;
    if((y==ui->label2_72->y())&&(x==ui->label2_72->x()))
        return true;
    if((y==ui->label2_73->y())&&(x==ui->label2_73->x()))
        return true;
    if((y==ui->label2_74->y())&&(x==ui->label2_74->x()))
        return true;
    }
    }
    return false;
}

bool MainWindow::if_there_is_an_box(int x, int y)
{
    int flag = ui->stackedWidget->currentIndex();
    switch (flag){
    case 0:{
    if((y==ui->label3_1->y())&&(x==ui->label3_1->x()))
        return true;
    if((y==ui->label3_2->y())&&(x==ui->label3_2->x()))
        return true;
    if((y==ui->label3_3->y())&&(x==ui->label3_3->x()))
        return true;
    }
        break;
    case 1:{
    if((y==ui->label3_4->y())&&(x==ui->label3_4->x()))
            return true;
    if((y==ui->label3_5->y())&&(x==ui->label3_5->x()))
            return true;
    if((y==ui->label3_6->y())&&(x==ui->label3_6->x()))
            return true;
    }
    }
    return false;
}



bool MainWindow::win()
{
    int flag = ui->stackedWidget->currentIndex();
    switch (flag){
    case 0:{
        if(((ui->label3_1->x()==280&&ui->label3_1->y()==80)||(ui->label3_1->x()==340&&ui->label3_1->y()==80)||
                (ui->label3_1->x()==400&&ui->label3_1->y()==80))&&
                ((ui->label3_2->x()==280&&ui->label3_2->y()==80)||(ui->label3_2->x()==340&&ui->label3_2->y()==80)||
                (ui->label3_2->x()==400&&ui->label3_2->y()==80))&&((ui->label3_3->x()==280&&ui->label3_3->y()==80)||
                  (ui->label3_3->x()==340&&ui->label3_3->y()==80)||
                     (ui->label3_3->x()==400&&ui->label3_3->y()==80)))
        {
            foot = 0;
            return true;
        }
        else
            return false;
    }
    case 1:{
        if(((ui->label3_4->x()==390&&ui->label3_4->y()==290)||(ui->label3_4->x()==390&&ui->label3_4->y()==350)||
                (ui->label3_4->x()==390&&ui->label3_4->y()==410))&&
                ((ui->label3_5->x()==390&&ui->label3_5->y()==290)||(ui->label3_5->x()==390&&ui->label3_5->y()==350)||
                (ui->label3_5->x()==390&&ui->label3_5->y()==410))&&((ui->label3_6->x()==390&&ui->label3_6->y()==290)||
                  (ui->label3_6->x()==390&&ui->label3_6->y()==350)||
                     (ui->label3_6->x()==390&&ui->label3_6->y()==410)))
        {
            foot = 0;
            return true;
        }
        else
            return false;
    }
    default:
        return false;
    }
}

void MainWindow::bomb()
{
    if(ui->label1_2->x()==210&&ui->label1_2->y()==350)
    {
        ui->label2_73->move(510,230);
        ui->label2_74->move(510,230);
        ui->label2_81->move(510,230);
    }
}

void MainWindow::clear_stage()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
    int flag = ui->stackedWidget->currentIndex();
    switch (flag){
    case 0:
    {
        int x = ui->label1->x();
        int y = ui->label1->y();
        switch (e->key())
   {
   case Qt::Key_Up : {
       if(if_there_is_an_wall(x,y-60))
           break;
       if((ui->label1->y()-60==ui->label3_1->y())&&(ui->label1->x()==ui->label3_1->x()))
       {
           if(if_there_is_an_wall(x,y-120))
               break;
           if(if_there_is_an_box(x,y-120))
               break;
           else
           {ui->label3_1->move(x,y-120);
            ui->label1->move(x, y-60);
            foot++;
            ui->label_5->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(1);
           break;}
       }
       if((ui->label1->y()-60==ui->label3_2->y())&&(ui->label1->x()==ui->label3_2->x()))
       {
           if(if_there_is_an_wall(x,y-120))
               break;
           if(if_there_is_an_box(x,y-120))
               break;
           else
           {ui->label3_2->move(x,y-120);
            ui->label1->move(x, y-60);
            foot++;
            ui->label_5->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(1);
           break;}
       }
       if((ui->label1->y()-60==ui->label3_3->y())&&(ui->label1->x()==ui->label3_3->x()))
       {
           if(if_there_is_an_wall(x,y-120))
               break;
           if(if_there_is_an_box(x,y-120))
               break;
           else
           {ui->label3_3->move(x,y-120);
            ui->label1->move(x, y-60);
            foot++;
            ui->label_5->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(1);
           break;}
       }
       else
       {ui->label1->move(x, y-60);
           foot++;
           ui->label_5->setNum(foot);}
       break;}
   case Qt::Key_Down : {
       if(if_there_is_an_wall(x,y+60))
           break;
       if((ui->label1->y()+60==ui->label3_1->y())&&(ui->label1->x()==ui->label3_1->x()))
       {
           if(if_there_is_an_wall(x,y+120))
               break;
           if(if_there_is_an_box(x,y+120))
               break;
           else
           {ui->label3_1->move(x,y+120);
            ui->label1->move(x, y+60);
            foot++;
            ui->label_5->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(1);
           break;}
       }
       if((ui->label1->y()+60==ui->label3_2->y())&&(ui->label1->x()==ui->label3_2->x()))
       {
           if(if_there_is_an_wall(x,y+120))
               break;
           if(if_there_is_an_box(x,y+120))
               break;
           else
           {ui->label3_2->move(x,y+120);
            ui->label1->move(x, y+60);
            foot++;
            ui->label_5->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(1);
           break;}
       }
       if((ui->label1->y()+60==ui->label3_3->y())&&(ui->label1->x()==ui->label3_3->x()))
       {
           if(if_there_is_an_wall(x,y+120))
               break;
           if(if_there_is_an_box(x,y+120))
               break;
           else
           {ui->label3_3->move(x,y+120);
            ui->label1->move(x, y+60);
            foot++;
            ui->label_5->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(1);
           break;}
       }
       else
       {
           if(x==100&&(y+60)==140)
           {
               clear_stage();
               break;
           }
           ui->label1->move(x, y+60);
           foot++;
           ui->label_5->setNum(foot);
       }
       break;}
   case Qt::Key_Left : {
       if(if_there_is_an_wall(x-60,y))
           break;
       if((ui->label1->x()-60==ui->label3_1->x())&&(ui->label1->y()==ui->label3_1->y()))
       {
           if(if_there_is_an_wall(x-120,y))
               break;
           if(if_there_is_an_box(x-120,y))
               break;
           else
           {ui->label3_1->move(x-120,y);
            ui->label1->move(x-60, y);
            foot++;
            ui->label_5->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(1);
           break;}
       }
       if((ui->label1->x()-60==ui->label3_2->x())&&(ui->label1->y()==ui->label3_2->y()))
       {
           if(if_there_is_an_wall(x-120,y))
               break;
           if(if_there_is_an_box(x-120,y))
               break;
           else
           {ui->label3_2->move(x-120,y);
            ui->label1->move(x-60, y);
            foot++;
            ui->label_5->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(1);
           break;}
       }
       if((ui->label1->x()-60==ui->label3_3->x())&&(ui->label1->y()==ui->label3_3->y()))
       {
           if(if_there_is_an_wall(x-120,y))
               break;
           if(if_there_is_an_box(x-120,y))
               break;
           else
           {ui->label3_3->move(x-120,y);
            ui->label1->move(x-60, y);
            foot++;
            ui->label_5->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(1);
           break;}
       }
       else
       {
           if((x-60)==100&&y==140)
           {
               clear_stage();
               break;
           }
           ui->label1->move(x-60, y);
           foot++;
           ui->label_5->setNum(foot);
       }
           break;
       }
   case Qt::Key_Right : {
       if(if_there_is_an_wall(x+60,y))
           break;
       if((ui->label1->x()+60==ui->label3_1->x())&&(ui->label1->y()==ui->label3_1->y()))
       {
           if(if_there_is_an_wall(x+120,y))
               break;
           if(if_there_is_an_box(x+120,y))
               break;
           else
           {ui->label3_1->move(x+120,y);
            ui->label1->move(x+60, y);
            foot++;
            ui->label_5->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(1);
           break;}
       }
       if((ui->label1->x()+60==ui->label3_2->x())&&(ui->label1->y()==ui->label3_2->y()))
       {
           if(if_there_is_an_wall(x+120,y))
               break;
           if(if_there_is_an_box(x+120,y))
               break;
           else
           {ui->label3_2->move(x+120,y);
            ui->label1->move(x+60, y);
            foot++;
            ui->label_5->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(1);
           break;}
       }
       if((ui->label1->x()+60==ui->label3_3->x())&&(ui->label1->y()==ui->label3_3->y()))
       {
           if(if_there_is_an_wall(x+120,y))
               break;
           if(if_there_is_an_box(x+120,y))
               break;
           else
           {ui->label3_3->move(x+120,y);
            ui->label1->move(x+60, y);
            foot++;
            ui->label_5->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(1);
           break;}
       }
       else
       {ui->label1->move(x+60, y);
       foot++;
       ui->label_5->setNum(foot);}
       break;}
        case Qt::Key_Space:{
            foot = 0;
            ui->label_5->setNum(foot);
            ui->label1->move(160,80);
            ui->label3_1->move(340,260);
            ui->label3_2->move(160,320);
            ui->label3_3->move(220,200);
            break;
        }
   }
    }
    break;
    case 1:
    {
        int x = ui->label1_2->x();
        int y = ui->label1_2->y();
        switch (e->key())
   {
   case Qt::Key_Up : {
       if(if_there_is_an_wall(x,y-60))
           break;
       if((ui->label1_2->y()-60==ui->label3_4->y())&&(ui->label1_2->x()==ui->label3_4->x()))
       {
           if(if_there_is_an_wall(x,y-120))
               break;
           if(if_there_is_an_box(x,y-120))
               break;
           else
           {ui->label3_4->move(x,y-120);
            ui->label1_2->move(x, y-60);
            foot++;
            ui->label_6->setNum(foot);
            bomb();
            if(win())
                ui->stackedWidget->setCurrentIndex(2);
            break;}
       }
       if((ui->label1_2->y()-60==ui->label3_5->y())&&(ui->label1_2->x()==ui->label3_5->x()))
       {
           if(if_there_is_an_wall(x,y-120))
               break;
           if(if_there_is_an_box(x,y-120))
               break;
           else
           {ui->label3_5->move(x,y-120);
            ui->label1_2->move(x, y-60);
            foot++;
            ui->label_6->setNum(foot);
            bomb();
            if(win())
                ui->stackedWidget->setCurrentIndex(2);
            break;}
       }
       if((ui->label1_2->y()-60==ui->label3_6->y())&&(ui->label1_2->x()==ui->label3_6->x()))
       {
           if(if_there_is_an_wall(x,y-120))
               break;
           if(if_there_is_an_box(x,y-120))
               break;
           else
           {ui->label3_6->move(x,y-120);
            ui->label1_2->move(x, y-60);
            foot++;
            ui->label_6->setNum(foot);
            bomb();
            if(win())
                ui->stackedWidget->setCurrentIndex(2);
            break;}
       }
       else
       {ui->label1_2->move(x, y-60);
       foot++;
       ui->label_6->setNum(foot);
       bomb();}
       break;}
   case Qt::Key_Down : {
       if(if_there_is_an_wall(x,y+60))
           break;
       if((ui->label1_2->y()+60==ui->label3_4->y())&&(ui->label1_2->x()==ui->label3_4->x()))
       {
           if(if_there_is_an_wall(x,y+120))
               break;
           if(if_there_is_an_box(x,y+120))
               break;
           else
           {ui->label3_4->move(x,y+120);
            ui->label1_2->move(x, y+60);
            foot++;
            ui->label_6->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(2);
            break;}
       }
       if((ui->label1_2->y()+60==ui->label3_5->y())&&(ui->label1_2->x()==ui->label3_5->x()))
       {
           if(if_there_is_an_wall(x,y+120))
               break;
           if(if_there_is_an_box(x,y+120))
               break;
           else
           {ui->label3_5->move(x,y+120);
            ui->label1_2->move(x, y+60);
            foot++;
            ui->label_6->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(2);
            break;}
       }
       if((ui->label1_2->y()+60==ui->label3_6->y())&&(ui->label1_2->x()==ui->label3_6->x()))
       {
           if(if_there_is_an_wall(x,y+120))
               break;
           if(if_there_is_an_box(x,y+120))
               break;
           else
           {ui->label3_6->move(x,y+120);
            ui->label1_2->move(x, y+60);
            foot++;
            ui->label_6->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(2);
            break;}
       }
       else
       {ui->label1_2->move(x, y+60);
       foot++;
       ui->label_6->setNum(foot);}
       break;}
   case Qt::Key_Left : {
       if(if_there_is_an_wall(x-60,y))
           break;
       if((ui->label1_2->x()-60==ui->label3_4->x())&&(ui->label1_2->y()==ui->label3_4->y()))
       {
           if(if_there_is_an_wall(x-120,y))
               break;
           if(if_there_is_an_box(x-120,y))
               break;
           else
           {ui->label3_4->move(x-120,y);
            ui->label1_2->move(x-60, y);
            foot++;
            ui->label_6->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(2);
            break;}
       }
       if((ui->label1_2->x()-60==ui->label3_5->x())&&(ui->label1_2->y()==ui->label3_5->y()))
       {
           if(if_there_is_an_wall(x-120,y))
               break;
           if(if_there_is_an_box(x-120,y))
               break;
           else
           {ui->label3_5->move(x-120,y);
            ui->label1_2->move(x-60, y);
            foot++;
            ui->label_6->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(2);
            break;}
       }
       if((ui->label1_2->x()-60==ui->label3_6->x())&&(ui->label1_2->y()==ui->label3_6->y()))
       {
           if(if_there_is_an_wall(x-120,y))
               break;
           if(if_there_is_an_box(x-120,y))
               break;
           else
           {ui->label3_6->move(x-120,y);
            ui->label1_2->move(x-60, y);
            foot++;
            ui->label_6->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(2);
            break;}
       }
       else
       {ui->label1_2->move(x-60, y);
       foot++;
       ui->label_6->setNum(foot);}
       break;}
   case Qt::Key_Right : {
       if(if_there_is_an_wall(x+60,y))
           break;
       if((ui->label1_2->x()+60==ui->label3_4->x())&&(ui->label1_2->y()==ui->label3_4->y()))
       {
           if(if_there_is_an_wall(x+120,y))
               break;
           if(if_there_is_an_box(x+120,y))
               break;
           else
           {ui->label3_4->move(x+120,y);
            ui->label1_2->move(x+60, y);
            foot++;
            ui->label_6->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(2);
            break;}
       }
       if((ui->label1_2->x()+60==ui->label3_5->x())&&(ui->label1_2->y()==ui->label3_5->y()))
       {
           if(if_there_is_an_wall(x+120,y))
               break;
           if(if_there_is_an_box(x+120,y))
               break;
           else
           {ui->label3_5->move(x+120,y);
            ui->label1_2->move(x+60, y);
            foot++;
            ui->label_6->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(2);
            break;}
       }
       if((ui->label1_2->x()+60==ui->label3_6->x())&&(ui->label1_2->y()==ui->label3_6->y()))
       {
           if(if_there_is_an_wall(x+120,y))
               break;
           if(if_there_is_an_box(x+120,y))
               break;
           else
           {ui->label3_6->move(x+120,y);
            ui->label1_2->move(x+60, y);
            foot++;
            ui->label_6->setNum(foot);
            if(win())
                ui->stackedWidget->setCurrentIndex(2);
            break;}
       }
       else
       {ui->label1_2->move(x+60, y);
       foot++;
       ui->label_6->setNum(foot);}
       break;}
        case Qt::Key_Space:{
            foot = 0;
            ui->label_6->setNum(foot);
            ui->label1_2->move(330,110);
            ui->label3_4->move(270,170);
            ui->label3_5->move(330,350);
            ui->label3_6->move(150,410);
            ui->label2_73->move(330,410);
            ui->label2_74->move(270,350);
            ui->label2_81->move(210,350);
            break;
        }
   }
   }
}
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_4_clicked()
{
    exit (1);
}

void MainWindow::pushButton_5()
{
    ui->stackedWidget->setCurrentIndex(1);
}
