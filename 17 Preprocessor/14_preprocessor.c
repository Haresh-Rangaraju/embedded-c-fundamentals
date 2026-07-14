#include <stdio.h>

#define MAX_SPEED 12

#define SQUARE(x)((x)*(x))

#define LED_PIN (1U<<5)

#define DEBUG

int main(void){
    int speed = MAX_SPEED;
    printf("Maax Speed: %d\n", speed);
    printf("Square of 5: %d\n", SQUARE(5));
    printf("LED Pin Mask: %u\n", LED_PIN);

#ifdef DEBUG
    printf("Debug mode enabled\n");
#endif
    return 0;
}
