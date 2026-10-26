#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;

    int *arr = malloc(n * sizeof(*arr));

    if(arr == NULL) {
        return 1;
    }

    for(int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
    }

    int *temp = realloc(arr, 10 * sizeof(*arr));
    if(temp == NULL) {
        free(arr);
        return 1;
    }

    arr = temp;

    free(arr);
    arr = NULL;

    return 0;
}