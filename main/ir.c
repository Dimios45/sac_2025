#include "ir.h"
#include "esp_log.h"

// Initialize IR sensor GPIO
void init_ir_sensor(void)
{
    gpio_config_t io_conf = {
        .pin_bit_mask = (1ULL << IR_SENSOR_PIN),
        .mode = GPIO_MODE_INPUT,
        .pull_up_en = GPIO_PULLUP_DISABLE,
        .pull_down_en = GPIO_PULLDOWN_ENABLE,
        .intr_type = GPIO_INTR_DISABLE
    };
    gpio_config(&io_conf);

    ESP_LOGI("IR", "IR sensor initialized on GPIO %d", IR_SENSOR_PIN);
}

// Read IR sensor state
int read_ir(void)
{
    int state = gpio_get_level(IR_SENSOR_PIN);
    return state;  // 0 = obstacle detected, 1 = clear
}

