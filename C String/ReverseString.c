#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseStr(char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while(left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main(void) {
    printf("Enter a string to reverse: ");
    char str[100];
    scanf("%99s", str);
    reverseStr(str);
    printf("Reversed string: %s", str);
    return 0;
}