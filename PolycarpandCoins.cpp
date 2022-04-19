#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n, c1, c2;

        cin >> n;
        c1 = n / 3;
        c2 = ((n - c1) / 2);

        if (c1 * 1 + c2 * 2 != n)
        {
            c1 = c1 + 1;
        }

        cout << c1 << " " << c2 << endl;
    }

    return 0;
}