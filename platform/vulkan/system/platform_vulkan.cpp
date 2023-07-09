#include "platform_vulkan.h"

extern "C"
void show_window();

gef::PlatformVulkan::PlatformVulkan()
{
    show_window();
}

gef::PlatformVulkan::~PlatformVulkan()
{
}
