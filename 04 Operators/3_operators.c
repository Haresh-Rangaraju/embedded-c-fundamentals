#include<stdio.h>
int main(){
    int a = 10;
    int b = 20;
    int c;

    c=a+b;
    printf("Sum: %d\n", c);

    int temp = 85;
    if(temp>80){
        printf("Temperature High\n");
    }

    unsigned char status = 0x04;
    if(status & (1<<2)){
        printf("Bit 2 is ON\n");
    }

    return 0;
}
