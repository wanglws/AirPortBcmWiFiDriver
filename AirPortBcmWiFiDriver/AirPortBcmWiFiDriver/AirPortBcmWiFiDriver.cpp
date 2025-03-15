//
//  AirPortBcmWiFiDriver.cpp
//  AirPortBcmWiFiDriver
//
//  Created by wanglws on 2025/3/15.
//

#include <os/log.h>

#include <DriverKit/IOUserServer.h>
#include <DriverKit/IOLib.h>

#include "AirPortBcmWiFiDriver.h"

kern_return_t
IMPL(AirPortBcmWiFiDriver, Start)
{
    kern_return_t ret;
    ret = Start(provider, SUPERDISPATCH);
    os_log(OS_LOG_DEFAULT, "Hello World");
    return ret;
}
CONFIGURATION_BUILD_DIR
