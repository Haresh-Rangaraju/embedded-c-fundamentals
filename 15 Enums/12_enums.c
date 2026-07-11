#include<stdio.h>

enum EngineState{
    ENGINE_OFF,
    ENGINE_ON,
    ENGINE_FAULT
};

enum ErrorCode{
    OK = 0,
    SENSOR_FAIL = 100,
    MOTOR_FAIL = 200
};

int main(void){
    enum EngineState state = ENGINE_ON;
    enum ErrorCode error = SENSOR_FAIL;

    printf("Engine State = %d\n", state);
    printf("Error Code = %d\n", error);

    if (state==ENGINE_ON){
        printf("Engine ON\n");
    }
    if (error==SENSOR_FAIL){
        printf("Sensor Fail\n");
    }

    return 0;
}