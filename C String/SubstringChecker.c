#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool subStr(char *check, char *string) {
    int slen = strlen(string);
    int clen = strlen(check);
    int end = slen - clen + 1;

    for(int i = 0; i < end; i++) {
        bool check_found = true;

        for(int j = 0; j < clen; j++) {
            if(check[j] != string[i + j]) {
                check_found = false;
                break;
            }
        }

        if(check_found) return true;
    }

    return false;
}

int main() {
    char s1[] = "Sadat";
    char c1[] = "Sad";

    if(subStr(c1, s1)) {
        printf("Substring");
    } else {
        printf("Not a substring");
    }
    return 0;
    
}
