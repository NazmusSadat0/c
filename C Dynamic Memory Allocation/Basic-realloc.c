#include <stdio.h>
#include <stdlib.h>

// realloc() resizes an existing allocated block.
// new_pointer = realloc(old_pointer, new_size_in_bytes);

int main() {
    int *arr = malloc(3 * sizeof(int));

    if(arr == NULL) {
        return 1;
    }

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    int *temp = realloc(arr, 5 * sizeof(int));

    if(temp == NULL) {
        free(arr);
        return 1;
    }

    arr = temp;

    arr[3] = 40;
    arr[4] = 50;

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}