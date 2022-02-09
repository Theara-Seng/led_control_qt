#ifndef RQT_LED_CONTROL_WIDGET
#define RQT_LED_CONTROL_WIDGET

#include <QWidget>
#include<ros/ros.h>
#include<std_msgs/Int16.h>
namespace Ui {
class led_controlWidget;
}

class led_controlWidget : public QWidget
{
    Q_OBJECT

public:
    explicit led_controlWidget(QWidget *parent = nullptr);
    ~led_controlWidget();

private slots:
    void on_progressBar_valueChanged(int value);

    void on_DesButton_clicked();

    void on_IncButton_clicked();

private:
    Ui::led_controlWidget *ui;
    ros::NodeHandle nh;
    ros::Publisher value=nh.advertise<std_msgs::Int16>("value",1000);
    std_msgs::Int16 msg;
    
};

#endif // RQT_LED_CONTROL_WIDGET
