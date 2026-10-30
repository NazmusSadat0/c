#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

int main() {
    Employee e;
    FILE *fp;

    fp = fopen("Employee-Record-Management.dat", "wb");

    if(fp == NULL) {
        return 1;
    }

    printf("How many employees: \n");
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter ID, Name, Salary: ");

        scanf("%d %49s %f", &e.id, e.name, &e.salary);

        fwrite(&e, sizeof(e), 1, fp);
    }

    fclose(fp);

    fp = fopen("Employee-Record-Management.dat", "rb");

    if(fp == NULL) {
        return 1;
    }

    printf("\nEmployee with salary > 3000: \n");

    while(fread(&e, sizeof(e), 1, fp) == 1) {
        if(e.salary > 3000) {
            printf("%d %s %.2f\n", e.id, e.name, e.salary);
        }
    }

    fclose(fp);

    return 0;
}
