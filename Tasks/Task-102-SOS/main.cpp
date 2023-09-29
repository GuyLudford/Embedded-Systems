#include "../lib/uopmsb/uop_msb_2_0_0.h"
#include "BMP280_SPI.h"

using namespace uop_msb_200;

LCD_16X2_DISPLAY lcd;

extern EnvironmentalSensor sensor;

float pressure;

int main(){

    while (true){
        lcd.cls();
        pressure  = sensor.getPressure();
        lcd.printf("pressure = %.1fmBar\n", pressure);
        wait_us(100000);

    }

} 