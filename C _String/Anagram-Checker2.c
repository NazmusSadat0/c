#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str1[101];
    char str2[101];
    int count1[26] = {0};
    int count2[26] = {0};
    
    if(scanf("%100s", str1) != 1 || scanf("%100s", str2) != 1) {
        return 0;
    }

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 != len2) {
        printf("Not anagram");
        return 0;
    }

    for(int i = 0; i < len1; i++) {
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
    }

    bool anagram = true;
    for(int i = 0; i < 26; i++) {
        if(count1[i] != count2[i]) {
            anagram = false;
            break;
        }
    }

    if(anagram) {
        printf("Anagram");
    } else {
        printf("Not anagram");
    }
    return 0;
}