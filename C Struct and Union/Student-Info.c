#include <stdio.h>

// Display Student Information using Structure

struct Student
{
    int roll;
    char name[50];
    float cgpa;
};


int main() {
    struct Student s1;

    printf("Enter roll, first name and CGPA: \n");
    if(scanf("%d %49s %f", &s1.roll, s1.name, &s1.cgpa) != 3) {
        printf("Invalid Input\n");
        return 1;
    }

    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("CGPA: %.2f\n", s1.cgpa);
    return 0;
    
}