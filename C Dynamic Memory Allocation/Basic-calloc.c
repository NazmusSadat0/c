#include <stdio.h>
#include <stdlib.h>

// calloc() allocates memory and initializes its bytes to zero.

int main() {
    int *arr = calloc(5, sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}