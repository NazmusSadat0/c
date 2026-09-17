#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word1[101];
    char word2[101];

    scanf("%100s", word1);
    scanf("%100s", word2);

    for (int i = 0; word1[i] != '\0'; i++) {
        word1[i] = tolower((unsigned char)word1[i]);
        word2[i] = tolower((unsigned char)word2[i]);
    }

    int result = strcmp(word1, word2);

    if (result < 0) {
        printf("-1");
    } else if (result > 0) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}
