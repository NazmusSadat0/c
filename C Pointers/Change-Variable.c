#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Before: %d\n", x);

    *p = 50;
    printf("After: %d", x);

    return 0;
}