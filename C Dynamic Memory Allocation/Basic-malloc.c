#include <stdio.h>
#include <stdlib.h>

// malloc() allocates memory without initializing its contents.

int main(void) {
    int *p = malloc(sizeof(int));

    if(p == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    *p = 50;

    printf("Value = %d\n", *p);

    free(p);
    p = NULL;

    return 0;
}