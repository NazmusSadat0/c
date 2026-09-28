#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Sample input : drawer reward
// Output : Yes

int main() {
    char a[100], b[100];
    bool reverse = true;
    
    if(fgets(a, sizeof(a), stdin) == NULL) return 1;
    if(fgets(b, sizeof(b), stdin) == NULL) return 1;

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    int alen = strlen(a);
    int blen = strlen(b);

    if(alen != blen) {
        printf("No\n");
        return 0;
    } else {
        for(int i = 0, j = blen - 1; i < alen; i++, j--) {
            if(a[i] != b[j]) {
                reverse = false;
                break;
            }
        }
    }

    if(reverse) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}