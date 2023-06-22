/*write a program to find the min & max of 1D arrray */

#include <stdio.h>
#include <limits.h>

int main() {
    int array[] = {1, 2, 34, 54, 6, 87, 72, 50, 40, 100};
    int length = sizeof(array) / sizeof(array[0]);

    int min = INT_MAX;  
    int max = INT_MIN;  

    
    for (int i = 0; i < length; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}