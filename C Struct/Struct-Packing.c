#include <stdio.h>
#include <stdlib.h>

struct Normal {
    char a;
    int b;
    char c;
};

struct __attribute__((packed)) Packed {
    char a;
    int b;
    char c;
};

int main(void) {
    printf("Normal : %zu bytes\n", sizeof(struct Normal));
    printf("Packed : %zu bytes\n", sizeof(struct Packed));
    
    return 0;
}