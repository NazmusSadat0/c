#include <stdio.h>
#include <assert.h>

// it checks whether a condition is true
// if the condition is false, the program terminates and reports the failed assertion

int main(void) {
    int age = 20;

    assert(age >= 18);

    printf("Eligible\n");

    return 0;
}