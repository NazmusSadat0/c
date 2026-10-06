#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 1;
    int y = 0;

    printf("Before: %d, %d\n", x, y);

    swap(&x, &y);

    printf("After: %d, %d\n", x, y);
    return 0;
}