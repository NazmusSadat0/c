#include <stdio.h>
#include <string.h>

int main() {
    char word[101];
    scanf("%100s", word);
    char new[101];
    int len = strlen(word);

    for(int i = len - 1, j = 0; j < len; i--, j++) {
        new[j] = word[i];
    }

    if(strcmp(new, word) == 0) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;

    
}