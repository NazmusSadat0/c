#include <stdio.h>
#include <stdlib.h>

int sumOfArr(int *arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    // You can use scanf to get array input

    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Sum: %d\n", sumOfArr(arr, size));
    return 0;
}