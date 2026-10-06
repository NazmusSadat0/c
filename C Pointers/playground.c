#include <stdio.h>

void find(int *a, int n, int *max, int *min) {
    *min = *a;
    *max = *a;

    for(int i = 1; i < n; i++) {
        if(*(a+i) > *min) {
            *max = *(a+i);
        } else {
            *min = *(a+i);
        }
    }
}

int main() {
    int a[] = {1,2, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int min;
    int max;

    find(a, n, &max, &min);

    printf("Minimum: %d", min);
    printf("Maximum: %d", max);
    
    return 0;
}