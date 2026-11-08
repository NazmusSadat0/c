#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    int (*fp)(int, int);

    fp = add;

    int result = add(1, 2);

    printf("Sum is : %d ", result);
    
    return 0;
}