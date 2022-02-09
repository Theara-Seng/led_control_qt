#ifndef RQT_LED_CONTROL
#define RQT_LED_CONTROL

#include <rqt_gui_cpp/plugin.h>
#include <std_msgs/String.h>

#include <rqt_led_control/rqt_led_control_widget.h>

namespace rqt_led_control {

class led_control : public rqt_gui_cpp::Plugin
{
public:
    led_control();

    void initPlugin(qt_gui_cpp::PluginContext& context) override;
    void shutdownPlugin() override;

    void saveSettings(qt_gui_cpp::Settings& plugin_settings, qt_gui_cpp::Settings& instance_settings) const override;
    void restoreSettings(const qt_gui_cpp::Settings& plugin_settings, const qt_gui_cpp::Settings& instance_settings) override;

private:
    led_controlWidget *widget = nullptr;
};

}

#endif // RQT_LED_CONTROL

