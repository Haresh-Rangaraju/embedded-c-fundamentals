#include<stdio.h>
#include<stdint.h>
int main(){
    uint16_t rpm = 3000;
    uint8_t engine_state = 1;
    uint8_t led_status = 1;

    printf("RPM = %d\n", rpm);
    printf("Engine state = %d\n", engine_state);
    printf("LED status = %d\n", led_status);

    return 0;
}