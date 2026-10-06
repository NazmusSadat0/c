#include <stdio.h>

int sum_arr(int *a, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(a + i);
    }
    return sum;
}

int main() {
    int a[] = {1,2};
    int n = sizeof(a) / sizeof(a[0]);
    printf("%d", sum_arr(a, n));
    return 0;
}