
#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};

struct Record
{
    int id;
    char type;
    union Data data;
};

int main(void)
{
    struct Record r;

    printf("Enter ID: ");
    scanf("%d", &r.id);

    printf("Select type:\n");
    printf("1. Integer\n");
    printf("2. Float\n");
    printf("3. Character\n");

    scanf(" %c", &r.type);

    switch (r.type)
    {
        case '1':
            printf("Enter integer: ");
            scanf("%d", &r.data.i);
            break;

        case '2':
            printf("Enter float: ");
            scanf("%f", &r.data.f);
            break;

        case '3':
            printf("Enter character: ");
            scanf(" %c", &r.data.c);
            break;

        default:
            printf("Invalid type.\n");
            return 1;
    }

    printf("\nID: %d\n", r.id);

    switch (r.type)
    {
        case '1':
            printf("Integer: %d\n", r.data.i);
            break;

        case '2':
            printf("Float: %.2f\n", r.data.f);
            break;

        case '3':
            printf("Character: %c\n", r.data.c);
            break;
    }

    return 0;
}
