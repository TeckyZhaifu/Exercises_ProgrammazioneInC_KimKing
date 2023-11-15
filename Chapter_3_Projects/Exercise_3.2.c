#include <stdio.h>

int main() {
    int itemNumber, day, month, year;
    float unitPrice;

    printf("Enter item number: ");
    scanf("%d", &itemNumber);
    printf("Enter unit price: ");
    scanf("%f", &unitPrice);
    printf("Enter purchase date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%-d\t$%.2f\t%-d/%-d/%-d", itemNumber, unitPrice, day, month, year);
    /* Scrivibile in un formato piu piacevole, ma preferisco tenerlo cosi per allenare l`occhio */
    
    return 0;
}