#include <stdio.h>

// Return a pointer to the first occurrence of a target. Return NULL if it is absent.

void searchArr(int *a, int len, int target) {
    for(int i = 0; i < n; i++) {
        if(*(a + i) == target) {
            return a + i;
        }
    }
    return NULL;
}

int main() {
    int a[] = {10, 20, 30, 20, 50};
    int len = sizeof(a) / sizeof(a[0]);

    searchArr(a, len, 20);

    printf("")
}