#ifndef CTRL_STEP_FW_ST_HARDWARE_H
#define CTRL_STEP_FW_ST_HARDWARE_H

#include <stdint-gcc.h>

#ifdef __cplusplus
extern "C" {
#endif

uint64_t GetSerialNumber();

void SetPowerMotor(bool _enable);

#ifdef __cplusplus
}


#endif
#endif
