#pragma once

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define SEMAPHORE_ID_MIN 0
#define SEMAPHORE_ID_MAX 31

bool semaphore_reserve(const uint8_t sem_id);

bool semaphore_release(const uint8_t sem_id);



#ifdef __cplusplus
}
#endif