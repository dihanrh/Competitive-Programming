#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif

    long long t;
    cin >> t;

    while (t--)
    {
        long long int a, b, c, d = - 1 ;
        cin >> a >> b >> c ;

        if ((2 * b - c) % a == 0 && (2 * b - c) > 0)
        {
            d = (2 * b - c) / a;
        }
        else if ((a + c) % (2 * b) == 0)
        {
            d = (a + c) / (2 * b);
        }
        else if ((2 * b - a) % c == 0 && (2 * b - a) > 0)
        {
            d = (2 * b - a) / c;
        }

        if (d == -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}