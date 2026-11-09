#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int sum;
    int sub;
    int mul;
} Result;

Result calculate(int a, int b) {
    Result r;
    r.sum = a + b;
    r.sub = a - b;
    r.mul = a * b;
    return r;
}

int main(void) {
    Result ans = calculate(2,1);
    printf("Sum: %d\n", ans.sum);
    printf("Sub: %d\n", ans.sub);
    printf("Mul: %d", ans.mul);

    return 0;
}