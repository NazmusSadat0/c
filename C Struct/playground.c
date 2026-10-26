#include <stdio.h>

struct Emp {
    char name[100];
    int salary;
};

// Return type changed to float to match the return value 'total'
float add(struct Emp e[3]) {
    float total = 0.0; // Initialized to 0.0
    
    for (int i = 0; i < 3; i++) {
        // Added & before e[i].salary
        scanf("%99s %d", e[i].name, &e[i].salary);
        total += e[i].salary + (0.2f * e[i].salary);
    }
    
    return total;
}

int main() {
    struct Emp employees[3]; // Local array instead of global shadow variable
    
    float total_cost = add(employees);
    printf("Total salary with 20%% bonus: %.2f\n", total_cost);
    
    return 0;
}
