#include<stdio.h>

/* Function prototype and Variable declaration (Normally placed in speed.h) */

void LED_ON(void);

extern int speed;

/* Variable defenition and Function implementation (Normally placed in led.c) */

int speed = 100;

void LED_ON(void){
    printf("LED ON\n");
}

int main(void){
    LED_ON();
    printf("Speed = %d\n", speed);

    return 0;
}