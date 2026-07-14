#include<stdio.h>

int VehicleSpeed = 80;

extern int VehicleSpeed;

void autoExample(void){
    int count = 10;
    printf("Auto Variable: %d\n", count);
}

void staticExample(void){
    static int counter = 0;
    counter++;
    printf("Static Counter: %d\n", counter);
}

void registerExample(void){
    register int i;
    for (i=0;i<3;i++){
        printf("%d\n", i);
    }
}

void externExample(void){
    printf("Vehicle Speed: %d\n", VehicleSpeed);
}

int main(void){
    autoExample();

    staticExample();
    staticExample();
    staticExample();

    registerExample();

    externExample();

    return 0;
}