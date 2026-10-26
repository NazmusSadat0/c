#include <stdio.h>

struct Date {
    int days;
    int month;
    int year;
};

struct Student {
    char name[30];
    struct Date dob;
};

int main() {
    struct Student s ={
        "Nazmus",
        {30, 9, 2006}
    };

    printf("Name: %s\n", s.name);
    printf("Date of birth: %d/%d/%d", s.dob.days, s.dob.month, s.dob.year);

    return 0;
}