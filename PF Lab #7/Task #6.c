#include <stdio.h>

int main() {
    int ids[10];
    int size = 10;
    int removeID;

    // Input 10 product IDs
    printf("Enter 10 product IDs (3-digit numbers):\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &ids[i]);
    }

    // Display original list
    printf("\nOriginal list:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", ids[i]);
    }

    // Input product ID to remove
    printf("\n\nEnter product ID to remove: ");
    scanf("%d", &removeID);

    // Remove all occurrences
    for (int i = 0; i < size; i++) {
        if (ids[i] == removeID) {
            // Shift everything left
            for (int j = i; j < size - 1; j++) {
                ids[j] = ids[j + 1];
            }
            size--; // one less element now
            i--;    // check same index again (new value moved here)
        }
    }

    // Print updated list
    printf("\nUpdated product list:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", ids[i]);
    }

    printf("\n");

    return 0;
}
