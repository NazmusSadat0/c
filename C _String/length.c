#include <stdio.h>
#include <stdlib.h>

int main() {
    char word[101];
    scanf("%100s", word);
    int len = 0;

    for(int i = 0; word[i] != '\0'; i++) {
        len++;
    }

    printf("Length of the word is: %d", len);
    return 0;
}
