#include <stdio.h>

struct Student
{
    /* data */
    int roll;
    char name[50];
    float cgpa;
};


int main() {
    struct Student s1 = {24, "Sadat", 3.5};
    printf("Roll: %d", s1.roll);
    printf("Name: %s", s1.name);
    printf("CGPA: %.2f", s1.cgpa);
    return 0;
    
}