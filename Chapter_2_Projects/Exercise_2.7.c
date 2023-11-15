#include <stdio.h>

int main() {
    int totalMoney;

    printf("Enter a dollar amount: ");
    scanf("%d", &totalMoney);

    printf("$20 bills: %d\n", totalMoney / 20);
    totalMoney = totalMoney - (totalMoney / 20 * 20);
    printf("$10 bills: %d\n", totalMoney / 10);
    totalMoney = totalMoney - (totalMoney / 10 * 10);
    printf("$5 bills: %d\n", totalMoney / 5);
    totalMoney = totalMoney - (totalMoney / 5 * 5);
    printf ("$1 bills: %d\n", totalMoney);

    return 0;
}