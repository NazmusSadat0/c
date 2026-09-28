#include <stdio.h>
#include <string.h>

// Sample input : banana ana
// Output : 1 3

int main(void) {
    char str[102], sub[102];

    if (fgets(str, sizeof str, stdin) == NULL) return 1;
    if (fgets(sub, sizeof sub, stdin) == NULL) return 1;

    str[strcspn(str, "\n")] = '\0';
    sub[strcspn(sub, "\n")] = '\0';

    if (sub[0] == '\0') {
        printf("Empty Substring\n");
        return 0;
    }

    char *position = strstr(str, sub);

    if (position == NULL) {
        printf("Not found\n");
        return 0;
    }

    while (position != NULL) {
        printf("%td ", position - str);

        position = strstr(position + 1, sub);
    }

    printf("\n");
    return 0;
}