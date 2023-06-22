/*write a program to find the reverse of the array */

#include <stdio.h>

int main() {
    int array[] = {1, 2, 34, 54, 6, 87, 72, 50, 40, 100};
    int length = sizeof(array) / sizeof(array[0]);

    printf("Original Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }

    printf("\nReversed Array: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }

    return 0;
}