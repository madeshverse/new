#include "sdk_project_config.h"
#include <stdint.h>
#include <stdio.h>
#include "OLED.h"

lpi2c_master_state_t lpi2c_master_state;


int main(void)
{
    CLOCK_DRV_Init(&clockMan1_InitConfig0);

    PINS_DRV_Init(
        NUM_OF_CONFIGURED_PINS0,
        g_pin_mux_InitConfigArr0
    );

    LPI2C_DRV_MasterInit(
        INST_LPI2C0,
        &lpi2c0_MasterConfig0,
        &lpi2c_master_state
    );

    OLED_INIT();

    OLED_CLEAR();

    OLED_putstring("hi", 5, 7);

}
