#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[100], temp;
    int n;

    printf("Enter number of employess: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%49s", e[i].name);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    for(int i = 0; i < n -1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(e[j].salary < e[j + 1].salary || 
            (e[j].salary == e[j + 1].salary && 
            e[j].id > e[j + 1].id)) {
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }

    printf("\nSorted Employees: \n");

    for(int i = 0; i < n; i++) {
        printf("%d %s %.2f\n", e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}