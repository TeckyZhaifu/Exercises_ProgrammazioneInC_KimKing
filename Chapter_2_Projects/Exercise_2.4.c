#include <stdio.h>

int main() {
    float startingMoney, endingMoney;

    printf("Enter an amount: ");
    scanf("%f", &startingMoney);
    endingMoney = (startingMoney / 100 * 5) + startingMoney;  /* Non efficiente ma molto chiaro*/
    printf("With tax added: %.2f\n", endingMoney);

    return 0;
}