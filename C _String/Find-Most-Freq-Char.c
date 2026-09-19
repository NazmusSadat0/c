#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char word[101];
    scanf("%100s", word);
    int count[26] = {0};

    for(int i = 0; word[i] != '\0'; i++) {
        count[word[i] - 'a']++;
    }

    int max = count[0];
    int mostFreq = word[0];

    for(int i = 0; word[i] != '\0'; i++) {
        if(word[i] > max) {
            max = count[word[i] - 'a'];
            mostFreq = word[i];
        }
    }

    printf("%c: %d", mostFreq, max);
    return 0;
}