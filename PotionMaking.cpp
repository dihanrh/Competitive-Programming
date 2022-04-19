// issue : test case loop is not working
// after 1st case executation.
// __gcd : it works.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;
        int x, y, gcd, ans;
        x = k;
        y = 100 - k;

        gcd = max(x, y) % min(x, y);

        if (gcd == 0)
            gcd = min(x, y);

        //   gcd = __gcd(x, y);
        x = x / gcd;
        y = y / gcd;

        ans = x + y;

        cout << ans << endl;
    }

    return 0;
}