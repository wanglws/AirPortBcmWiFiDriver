//
//  AirportBCMWiFiDriver.c
//  AirportBCMWiFiDriver
//
//  Created by wanglws on 2025/3/15.
//

#include <mach/mach_types.h>

kern_return_t AirportBCMWiFiDriver_start(kmod_info_t * ki, void *d);
kern_return_t AirportBCMWiFiDriver_stop(kmod_info_t *ki, void *d);

kern_return_t AirportBCMWiFiDriver_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t AirportBCMWiFiDriver_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
