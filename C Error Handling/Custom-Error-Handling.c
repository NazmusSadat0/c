#include <stdio.h>

enum ErrorCode
{
    SUCCESS,
    INVALID_INPUT,
    DIVISION_BY_ZERO,
    NEGATIVE_NUMBER
};

enum ErrorCode calculate(int a, int b, int *result)
{
    if (a < 0 || b < 0)
    {
        return NEGATIVE_NUMBER;
    }

    if (b == 0)
    {
        return DIVISION_BY_ZERO;
    }

    *result = a / b;

    return SUCCESS;
}

int main(void)
{
    int result;

    enum ErrorCode status = calculate(10, 0, &result);

    switch (status)
    {
        case SUCCESS:
            printf("Result = %d\n", result);
            break;

        case INVALID_INPUT:
            printf("Invalid input!\n");
            break;

        case DIVISION_BY_ZERO:
            printf("Cannot divide by zero!\n");
            break;

        case NEGATIVE_NUMBER:
            printf("Negative numbers are not allowed!\n");
            break;
    }

    return 0;
}