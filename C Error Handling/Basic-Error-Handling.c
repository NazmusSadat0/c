#include <stdio.h>
#include <string.h>
#include <errno.h>

int main() {
    FILE *fp = fopen("unknow.txt", "r");

    if(fp == NULL) {
        printf("Error code: %d\n", errno);
        printf("Error message: %s\n", strerror(errno));
        perror("File opening failed");
        return 1;
    }

    fclose(fp);

    return 0;
}