#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll t ;
    cin >> t;
    while (t--)
    {
        int n, a, b, c = 1;
        cin >> n;
        n--;
        a = n / 2, b = n - a;
        while (__gcd(a, b) != 1)
            a++, b--;
        cout << a << ' ' << b << ' ' << c << endl ;
    }
}

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

    solve();

    return 0;
}