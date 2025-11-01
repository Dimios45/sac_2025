#ifndef IR_H
#define IR_H

#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

// Define which GPIO your IR sensor uses
#define IR_SENSOR_PIN GPIO_NUM_0

// Function to initialize the IR sensor GPIO
void init_ir_sensor(void);

// Function to read IR sensor state (returns 0 = obstacle, 1 = no obstacle)
int read_ir(void);

#endif // IR_H

