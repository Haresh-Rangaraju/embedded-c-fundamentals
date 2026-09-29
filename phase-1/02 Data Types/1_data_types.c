#include<stdio.h>
#include<stdint.h>
int main(){
    uint8_t signal = 1;
    uint16_t adc_value = 1023;
    uint32_t engine_rpm = 4500;

    printf("Signal: %d\n", signal);
    printf("ADC Value: %d\n", adc_value);
    printf("Engine RPM: %d\n", engine_rpm);

    return 0;
}
