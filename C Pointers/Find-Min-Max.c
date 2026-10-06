#include <stdio.h>

void find_min_max(int *a, int n, int *min, int *max) {
    *min = *a;
    *max = *a;

    for(int i = 1; i < n; i++) {
        if(*(a + i) > *max) {
            *max = *(a + i);
        }

        if(*(a + i) < *min) {
            *min = *(a + i);
        }
    }
}

int main() {
    int a[] = {8, 3, 17, -2, 11};
    int n = sizeof(a) / sizeof(a[0]);
    int min;
    int max;

    find_min_max(a, n, &min, &max);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d", max);
    
    return 0;
}