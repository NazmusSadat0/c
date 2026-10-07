#include <stdio.h>
#include <stdlib.h>

void copyStr(char *destination, char *source) {
    while(*source != '\0') {
        *destination = *source;
        *destination++;
        *source++;
    }
    *destination = '\0';
}

int main() {
    char destination[100];
    char source[] = "Hello world!";

    copyStr(destination, source);

    printf("Copied: %s\n", destination);
    return 0;
}