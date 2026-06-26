#include<stdio.h>
int main(void){
    int x = 10;
    int *p = &x;
    printf("value of x = %d\n",  x);
    printf("Address of x = %p\n", (void *)&x);
    printf("Address using p = %p\n", (void *)p);
    printf("value using *p = %d\n", *p);

    *p = 20;
    printf("value after change = %d\n", x);
    printf("value using *p after change = %d\n", *p);

    return 0;

}