#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    int n;
    
    printf("How many numbers? ");

    if(scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    if((size_t)n > SIZE_MAX / sizeof(int) ) {
        printf("Array is too large.\n");
        return 1;
    }

    int *arr = malloc((size_t)n * sizeof *arr);

    if(arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int sum = 0;

    printf("Enter %d numbers: ", n);

    for(int i = 0; i < n; i++) {
        if(scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            free(arr);
            return 1;
        }

        sum += arr[i];
    }

    double avg = (double)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    free(arr);

    return 0;
}