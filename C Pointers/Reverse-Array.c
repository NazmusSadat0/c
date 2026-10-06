#include <stdio.h>

void reverse_arr(int *a, int n) {
    for(int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = *(a + i);
        *(a + i) = *(a + j);
        *(a + j) = temp;
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);

    reverse_arr(a, n);

    for(int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
}