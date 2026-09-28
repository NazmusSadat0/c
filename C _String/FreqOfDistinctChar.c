#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int vowels = 0;
    int consonants = 0; 
    int digits = 0;
    int spaces = 0;

    if(fgets(word, sizeof(word), stdin) == NULL) {
        return 1;
    }

    for(int i = 0; word[i] != '\0'; i++) {
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a';
        }
        
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    return 0;
}