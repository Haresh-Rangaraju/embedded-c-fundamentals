#include<stdio.h>
int main(){
    unsigned char status= 0x00;
    
    /*set bit*/
    status |=(1<<1);
    printf("After setting bit_1= %u\n", status);

    status |=(1<<3);
    printf("After setting bit_3= %u\n", status);

    /*check bit*/
    if (status & (1<<3)){
        printf("Bit 3 ON\n");

    }
    
    /*clear bit*/
    status &=~(1<<1);
    printf("After clearing bit_1= %u\n", status);

    /*toggle bit*/
    status ^=(1<<3);
    printf("affter toggling bit_3= %u\n", status);

    return 0;

}
