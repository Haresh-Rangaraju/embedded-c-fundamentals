#include<stdio.h>
void LED_ON(void){
    printf("LED ON\n");
}
int square(int x){
    return x*x;
}
int main(){
    LED_ON();
    int result=square(4);
    printf("square= %d\n", result);
    return 0;
}