#include <stdio.h>
#include <string.h>

int main(void) {
    char str[101];
    int words = 0;

    printf("Enter a sentence: ");

    if (fgets(str, sizeof str, stdin) == NULL) {
        return 1;
    }

    char *token = strtok(str, " \t\r\n");

    while (token != NULL) {
        words++;
        token = strtok(NULL, " \t\r\n");
    }

    printf("Words: %d\n", words);

    return 0;
}