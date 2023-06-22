/*write a program to find the Sum & Average of 1D Array*/

#include <stdio.h>

int main() {
    int array[] = {1, 2, 34, 54, 6, 87, 72, 50, 40, 100};
    int length = sizeof(array) / sizeof(array[0]);
    int sum = 0;

    // Calculate the sum of the elements
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }

    // Calculate the average
    float average = (float)sum / length;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}