#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int zero = 0;
        int minusOne = 0;
        int count = 0;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);

            if (arr[i] == 0)
            {
                zero++;
            } else if(arr[i] == -1) {
                minusOne++;
            }
        }

        if(minusOne % 2 != 0) {
            count = zero + 1;
        } else {
            count = zero;
        }

        printf("%d\n", count);
    }

    return 0;
}