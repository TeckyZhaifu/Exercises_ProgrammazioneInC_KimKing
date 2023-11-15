#include <stdio.h>
#define PI 3.14

int main() {
    float volume, radius;

    printf("Insert radius: ");
    scanf("%f", &radius);
    volume = 4.0 / 3.0 * PI * radius * radius * radius; /*v=4/3PIr^3*/
    printf("Il volume: %.2f\n", volume);
    
    return 0;
}