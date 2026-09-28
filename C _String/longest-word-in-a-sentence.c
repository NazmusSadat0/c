#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[100];
    char longest[100] = "";
    size_t maxLen = 0;

    if(fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    char *token = strtok(str, " \t\v\n\r");
    while(token != NULL) {
        size_t len = strlen(token);

        if(len > maxLen) {
            maxLen = len;
            strcpy(longest, token);
        }

        token = strtok(NULL, " \t\r\v\n");
    }

    if(maxLen == 0) {
        printf("No words found\n");
    } else {
        printf("Longest word: %s\nI", longest );
        printf("Length: %zu", maxLen);
    }
    return 0;
}