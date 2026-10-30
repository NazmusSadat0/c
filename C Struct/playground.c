#include <stdio.h>
#include <stdlib.h>

struct Fraction {
    int num;
    int den;
};

struct Fraction add(struct Fraction a, struct Fraction b) {
    struct Fraction result;

    result.num = a.num * b.den + b.num * a.den;
    result.den = a.den * b.den;

    return result;
}

int main(void) {
    struct Fraction f1 = {1, 2};
    struct Fraction f2 = {3, 4};

    struct Fraction sum = add(f1, f2);

    printf("Sum = %d/%d\n", sum.num, sum.den);

    return 0;
    
}