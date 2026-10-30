#include <stdio.h>
#include <stdlib.h>

#define RED "\033[1;31m"
#define RESET "\033[0m"

typedef enum 
{
    EXIT,
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
} Menu;

int main(void)
{
     Menu choice;
    int input;
    int a, b;

    printf(RED "--- CALCULATOR ---" RESET "\n");

    printf("Enter 1st number: \n");
    scanf("%d", &a);

    printf("Enter 2nd number: \n");
    scanf("%d", &b);

    printf("Select an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply (MULTIPLY)\n");
    printf("4. Divide\n");
    printf("Enter choice (1-4): ");

    if (scanf("%d", &input) == 1)
    {
        choice = (Menu)input;
    }

    switch (choice)
    {
    case ADD:
        printf("%d\n", a + b);
        break;

    case SUBTRACT:
        printf("%d\n", a - b);
        break;

    case MULTIPLY:
        printf("%d\n", a * b);
        break;

    case DIVIDE:
        printf("%d\n", a / b);
        break;

    case EXIT:
        printf("Exiting...\n");
        break;

    default:
        printf("Invalid choice\n");
    }

    return 0;
}