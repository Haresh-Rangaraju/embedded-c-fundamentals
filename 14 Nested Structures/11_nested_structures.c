#include<stdio.h>
#include<stdint.h>

struct Engine{
    uint16_t rpm;
    uint16_t temperature;
};

struct Car{
    struct Engine engine;
    uint16_t speed;
};

int main(void){
    struct Car myCar;

    myCar.engine.rpm = 3000;
    myCar.engine.temperature = 90;
    myCar.speed = 80;

    printf("Engine RPM = %d\n", myCar.engine.rpm);
    printf("Engine Temperature = %d\n", myCar.engine.temperature);
    printf("Vehicle Speed = %d\n", myCar.speed);

    return 0;
}