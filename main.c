#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
    char a[100], b[100];
    if(fgets(a, sizeof(a), stdin) == NULL) return 1;
    if(fgets(b, sizeof(b), stdin) == NULL) return 1;

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    int alen = strlen(a);
    int blen = strlen(b);
    bool reverse = true;

    if(alen == blen) {
        for(int i = 0, j = blen - 1; i < alen; i++, j--) {
            if(a[i] != b[j]) {
                reverse = false;
                break;
            }
        }
    }

    if(reverse) {
        printf("Reverse");
    } else {
        printf("Not reverse");
    }
}