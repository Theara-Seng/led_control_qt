#include <rqt_led_control/rqt_led_control_widget.h>
#include "ui_rqt_led_control_widget.h"
#include <QMessageBox>
led_controlWidget::led_controlWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::led_controlWidget)
{
    ui->setupUi(this);
    msg.data=24;
}

led_controlWidget::~led_controlWidget()
{
    delete ui;
}

void led_controlWidget::on_progressBar_valueChanged(int value)
{
 

 // widget->progressBar(value);
}

void led_controlWidget::on_DesButton_clicked()
{
if (msg.data<1){
    QMessageBox::information(this, "warning", "The value cannot be zero");
    msg.data=1;
 }
 msg.data-=1;
 ui->progressBar->setValue(msg.data);
 value.publish(msg);
 
 
}

void led_controlWidget::on_IncButton_clicked()
{
if (msg.data>99){
    QMessageBox::information(this, "warning", "The value cannot go bigger");
    msg.data=99;
 }
  msg.data+=1;
  ui->progressBar->setValue(msg.data);
  value.publish(msg);
  
}
