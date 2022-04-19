#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);
/*
#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif
*/
    long long int n, l;
    cin >> n >> l;
    double a[n], p, tmp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
   // tmp = a[0] ,  (l - a[n-1]);
    p = max ( a[0] , (l - a[n-1])) ;

    for (int i = 0; i < n - 1; i++)
    {
        p = max(p, (a[i + 1] - a[i]) / 2);
    }

    cout << fixed << setprecision(9) <<  p << endl ;

    return 0;
}
