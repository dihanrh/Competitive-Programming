#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        int z = 0;
        string x, y;

        cin >> n >> x >> y;

        for (int i = 0; i < n; i++)
        {
            if (y[i] == 0)
            {
                continue;
            }

            if (x[i] == 0)
            {
                z++;
                continue;
            }
            if (i - 1 >= 0 && x[i - 1] == 1)
            {
                z++;
                x[i - 1] = 2;
                continue;
            }
            if (i + 1 < n && x[i + 1] == 1)
            {
                z++;
                x[i + 1] = 2;
                continue;
            }
            
        }

        cout << z << endl;
    }

    return 0;
}