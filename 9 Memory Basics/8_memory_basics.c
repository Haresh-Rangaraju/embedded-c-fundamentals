#include<stdio.h>

int global_var = 100;
const int MAX_RPM = 6000;

void fun(void){
    int local_var = 25;
    printf("Local variable = %d\n", local_var);
}

int main(void){
    int speed = 80;
    printf("Global variable = %d\n", global_var);
    printf("Speed = %d\n", speed);
    printf("MAX RPM = %d\n", MAX_RPM);
    fun();
    return 0;
}