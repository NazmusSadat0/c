#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char word[101];
    char result[101];
    scanf("%100s", word);
    int k = 0;

    for (int i = 0; word[i] != '\0'; i++) {
        bool found = false;

        // Search inside the output array (result)
        for (int j = 0; j < k; j++) {
            if (word[i] == result[j]) {
                found = true;
                break;
            }
        }

        // Add character if it hasn't been added yet
        if (!found) {
            result[k] = word[i];
            k++;
        }
    }

    result[k] = '\0';
    printf("%s\n", result);
    return 0;
}