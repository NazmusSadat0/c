#include <stdio.h>
#include <string.h>

int main() {
    char word1[101];
    scanf("%100s", word1);
    char word2[101];
    scanf("%100s", word2);
    int i = 0;
    bool equal = true;

    while(word1[i] != '\0' && word2[i] != '\0') {
        if(word1[i] != word2[i]) {
            equal = false;
            break;
        }
        i++;
    }

    if(equal) {
        printf("Equal");
    } else {
        printf("Not equal");
    }
    return 0;
}