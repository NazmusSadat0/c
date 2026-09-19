#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[101];
    int words = 0;

    if(fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            words++;
        }
    }

    int result = words + 1;

    printf("%d", result);
    return 0;
}