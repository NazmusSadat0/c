#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);
        int count = 0;
        int zero = 0;
        int minusOne = 0;

        while(n--) {
            int x;
            scanf("%d", &x);
            if(x == 0) {
                zero++;
            } else if(x == -1) {
                minusOne++;
            }

            count = zero;

            if(minusOne % 2 != 0) {
                count += 1;
            }

            printf("%d", count);
        }
    }
    return 0;
    
}