#include<stdio.h>

void increament(int *p){
    (*p)++;
}

int main(void){
    int arr[] = {10, 20, 30, 40};
    int *p = arr;
    
    printf("Pointer Arithmetic :\n");
    printf("%d\n", *p);

    printf("Array Access :\n");
    printf("%d\n", arr[2]);
    printf("%d\n", *(arr+2));

    int x = 5;
    increament(&x);
    printf("After increament : %d\n", x);

    int *ptr = NULL;
    if (ptr == NULL){
        printf("Pointer is NULL\n");
    }

    int y = 100;
    void *vp = &y;
    printf("%d\n", *(int *)vp);

    return 0;

}