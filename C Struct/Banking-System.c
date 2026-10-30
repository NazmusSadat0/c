#include <stdio.h>
#include <stdlib.h>

union AccountInfo
{
    float interestRate;
    float overdraftLimit;
};

struct Account
{
    int accountNumber;
    char name[50];
    int type;

    union AccountInfo info;
};

int main(void)
{
    struct Account a[100];
    int n;

    printf("Enter number of accounts: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nAccount %d\n", i + 1);

        printf("Account Number: ");
        scanf("%d", &a[i].accountNumber);

        printf("Name: ");
        scanf("%49s", a[i].name);

        printf("Type (1 Savings, 2 Current): ");
        scanf("%d", &a[i].type);

        if (a[i].type == 1)
        {
            printf("Interest Rate: ");
            scanf("%f", &a[i].info.interestRate);
        }
        else if (a[i].type == 2)
        {
            printf("Overdraft Limit: ");
            scanf("%f", &a[i].info.overdraftLimit);
        }
        else
        {
            printf("Invalid account type.\n");
            return 1;
        }
    }

    printf("\n--- Savings Accounts ---\n");

    for (int i = 0; i < n; i++)
    {
        if (a[i].type == 1 &&
            a[i].info.interestRate > 5.0f)
        {
            printf("%s | %.2f%%\n",
                   a[i].name,
                   a[i].info.interestRate);
        }
    }

    printf("\n--- Current Accounts ---\n");

    for (int i = 0; i < n; i++)
    {
        if (a[i].type == 2 &&
            a[i].info.overdraftLimit > 10000.0f)
        {
            printf("%s | %.2f\n",
                   a[i].name,
                   a[i].info.overdraftLimit);
        }
    }

    return 0;
}
