#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char word[101];
    scanf("%100s", word);
    int count[26] = {0};
    bool found = false;

    for(int i = 0; word[i] != '\0'; i++) {
         count[word[i] - 'a']++;
    }

    for(int i = 0; word[i] != '\0'; i++) {
        if(count[word[i] - 'a'] <= 1) {
            printf("%c", word[i]);
            found = true;
            break;
        }
       
    }

    if(!found) {
        printf("Found none");
    }

    return 0;

}