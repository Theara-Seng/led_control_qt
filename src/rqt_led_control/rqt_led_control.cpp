#include <rqt_led_control/rqt_led_control.h>

#include <pluginlib/class_list_macros.h>
#include <ros/master.h>

namespace rqt_led_control {


led_control::led_control() :
    rqt_gui_cpp::Plugin()
{
    setObjectName("led_control");
}

void led_control::initPlugin(qt_gui_cpp::PluginContext &context)
{
    widget = new led_controlWidget();
    context.addWidget(widget);
}

void led_control::shutdownPlugin()
{

}

void led_control::saveSettings(qt_gui_cpp::Settings &plugin_settings, qt_gui_cpp::Settings &instance_settings) const
{

}

void led_control::restoreSettings(const qt_gui_cpp::Settings &plugin_settings, const qt_gui_cpp::Settings &instance_settings)
{

}

} // end namespace rqt_led_control

PLUGINLIB_EXPORT_CLASS(rqt_led_control::led_control, rqt_gui_cpp::Plugin)
