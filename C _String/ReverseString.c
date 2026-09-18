#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char word[101];
    scanf("%100s", word);
    int len = strlen(word);
    char newWord[101];

    for(int i = len - 1, j = 0; j < len; i--, j++) {
        newWord[j] = word[i];
    }

    printf("Reversed String: %s", newWord);
    return 0;
}