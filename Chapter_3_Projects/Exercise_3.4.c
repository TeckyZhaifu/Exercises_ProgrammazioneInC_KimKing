#include <stdio.h>

int main () {
    int x, y, z;
    /* Si potrebbe utilizzare una singola variabile char, ma non penso sia l`intento dell`esercizio */

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &x, &y, &z);

    printf("You entered: %d.%d.%d", x, y, z);

    return 0;
}