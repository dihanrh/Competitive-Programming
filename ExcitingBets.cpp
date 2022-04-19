#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;

        if (a == b)
            cout << "0 0" << endl;
        else
        {
            // cout << abs(a -b )  << " " << min ( abs(a-b)% min (a,b) , min(a,b) % abs(a-b)) << endl ;
            if (a > b)
                swap(a, b);
            long long ans = b - a;
            long long x = a % ans ;
            long long y =ans - (a % ans);
            cout << ans << " " << min(x, y) << endl;
        }
    }

    return 0;
}