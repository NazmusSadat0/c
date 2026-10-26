#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    char word[101];
    scanf("%100s", word);
    char result[101];
    int i;
    int j = 0;

    for(i = 0; word[i] != '\0'; i++) {
        if(word[i] != 'A' && word[i] != 'E' && word[i] != 'I' && word[i] != 'O' && word[i] != 'U' &&
        word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u') {
            result[j] = word[i];
            j++;
        }
    }
    result[j] = '\0';

    printf("%s", result);
    return 0;
    

}