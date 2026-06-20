#include<stdio.h>
#include<stdint.h>
int main(void){
    int arr[4]={10,20,30,40};
    printf("Array elements=\n");
    int i ;
    for(i=0; i<4; i++){
        printf("%d\n", arr[i]);
    }
    uint8_t CAN_DATA[8]={0x10, 0x20, 0x30, 0x40, 0x50, 0x60, 0x70, 0x80};
    printf("CAN data=\n");
    int j ;
    for(j=0; j<8; j++){
        printf("0x%X\n", CAN_DATA[j]);
    }

    return 0;
}