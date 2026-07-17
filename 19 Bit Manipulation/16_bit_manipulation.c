#include<stdio.h>
#include<stdint.h>

int main(void){
    uint8_t reg = 0b00101100;

    printf("Initial Register = 0x%02x\n", reg);

    reg |= (1<<2);
    printf("Set bit 2 = 0x%02x\n", reg);

    reg &= ~(1<<5);
    printf("Clear bit 5 = 0x%02x\n", reg);
    
    reg ^= (1<<3);
    printf("Toggle bit 3 = 0x%02x\n", reg);

    if (reg&(1<<2)){
        printf("Bit 2 is set\n");
    }

    reg |= (1<<1)|(1<<6);
    printf("Set bits 1 and 6 = 0x%02x\n", reg);

    reg &= ~((1<<2)|(1<<6));
    printf("Clear bits 2 and 6 = 0x%02x\n", reg);

    reg ^= (1<<3)|(1<<4);
    printf("Toggle bits 3 and 4 = 0x%02x\n", reg);

    uint8_t value = (reg>>4)&0x0F;
    printf("Bits 4-7 = 0x%02x\n", value);

    return 0;
}