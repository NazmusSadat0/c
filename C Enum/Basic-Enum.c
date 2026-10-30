#include <stdio.h>
#include <stdlib.h>

enum Day {
    SUNDAY, // 0
    MONDAY, // 1
    TUESDAY, // 2
    WEDNESDAY, // 3
    THURSDAY, // 4
    FRIDAY, // 5
    SATURDAY // 6
};

enum Status
{
    FAILED = -1,
    PENDING = 0,
    SUCCESS = 1

    // we can assign specific values
};

enum Number
{
    A = 5,   // 5
    B,       // 6
    C = 10,  // 10
    D        // 11

    // if we explicit values, it will automatically decide next value
};

int main() {
    enum Day day = WEDNESDAY;

    if(day == WEDNESDAY) {
        printf("Wednesday\n");
    } 

    prinf("Value of WEDNESDAY : %d", day);

    return 0;
}