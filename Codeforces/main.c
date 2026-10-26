#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    char batch[50];
    int age;
}

int main() {
    struct Student s;
    char line[100];
    if(fgets(line, sizeof(line), stdin) != 1) {
        printf("Input failed\n");
    }

    char *token = strtok(line, "-");
    strcpy(s.name, token);

    token = strtok(NULL, "-");
    strcpy(s.batch, token);

    token = 
}