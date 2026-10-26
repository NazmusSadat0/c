
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

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x == 0)
                zero++;
            else if (x == -1)
                minusOne++;
        }

        int count = zero;

        if (minusOne % 2 != 0)
            count++;

        cout << count << '\n';
    }

    return 0;
}
