#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("Enter array size: ");

    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input!\n");
        return 1;
    }

    if (n <= 0)
    {
        printf("Array size must be positive!\n");
        return 1;
    }

    int *arr = malloc((size_t)n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid element!\n");
            free(arr);
            return 1;
        }
    }

    printf("Array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}