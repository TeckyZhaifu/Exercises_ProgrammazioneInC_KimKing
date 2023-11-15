#include <stdio.h>

int main() {
    int gs, groupIdentifier, publisherCode, itemNumber, check;

    printf("Enter ISBN (use \"-\" between numbers): ");
    scanf("%d-%d-%d-%d-%d", &gs, &groupIdentifier, &publisherCode, &itemNumber, &check);

    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n",
            gs, groupIdentifier, publisherCode, itemNumber, check);
    
    return 0;
}