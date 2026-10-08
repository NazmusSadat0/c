#include <stdio.h>

struct Complex
{
    double real;
    double img;
};

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex result;

    result.real = a.real + b.real;
    result.img = a.img + b.img;

    return result;
}

int main() {
    struct Complex a = {3.0, 4.0};
    struct Complex b = {2.0, 5.0};

    struct Complex sum = add(a, b);

    printf("Sum: %.2f + %.2fi", sum.real, sum.img);

    return 0;
}