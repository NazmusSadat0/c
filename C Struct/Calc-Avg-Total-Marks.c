#include <stdio.h>

// Input : roll and three marks
// Output : Total and Avg marks
// USE STRUCT

struct Student
{
    int roll;
    float marks[3];
};

int main() {
    struct Student s;
    float total = 0;
    float avg = 0;

    printf("Enter roll: \n");
    if(scanf("%d", &s.roll) != 1) {
        printf("Empty\n");
        return 1;
    }

    printf("Enter three marks: \n");

    for(int i = 0; i < 3; i++) {
        if(scanf("%f", &s.marks[i]) != 1) {
            printf("Empty marks\n");
        }

        total += s.marks[i];
    }

    avg = total / 3;

    printf("--------\n");
    printf("Roll no: %d\n", s.roll);
    printf("Total marks: %.2f\n", total);
    printf("Average mark: %.2f\n", avg);

    return 0;
}