#include <stdio.h>
#include <string.h>

int main() {
    char line[100], name[100];
    int roll, m1, m2, m3;

    if(fgets(line, sizeof(line), stdin) == NULL) {
        return 1;
    }
    
    // Sample Input : Sadat 52507024 80 75 82
    int items = sscanf(line, "%99s %d %d %d %d", name, &roll, &m1, &m2, &m3);

    if(items != 5) {
        printf("Invalid input\n");
        return 1;
    }

    int total = m1 + m2 + m3;
    double avg = total / 3.0;

    printf("Name: %s\n", name);
    printf("Roll: %d\n", roll);
    printf("Total: %d\n", total);
    printf("Average: %.2f", avg);

    return 0;
}