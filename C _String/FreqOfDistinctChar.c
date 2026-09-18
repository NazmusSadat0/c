#include <stdio.h>
#include <string.h>

int main() {
    char word[101];
    scanf("%100s", word);
    int count[26] = {0};
    char new[101];

    for(int i = 0; word[i] != '\0'; i++) {
        count[word[i] - 'a']++;
    }

    for(int i = 0; word[i] != '\0'; i++) {\
        if(count[word[i] - 'a'] == 1) {
            new[i] = word[i];
        }
    }

    printf("%s", new);
    return 0;
}