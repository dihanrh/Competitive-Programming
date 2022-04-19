#include <bits/stdC++.h>
using namespace std;

void solve()
{

    int n, k;
    cin >> n >> k;
    int ar[n + 1] = {0};
    int m = INT_MAX  ,  a;

    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        ar[i] += ar[i - 1];
        cout << "i : " <<  i << "  a[i] " << ar[i] << endl ;
    }

    for (int i = 0 ; i <= n - k; i++)
    {
        if (m > ar[i + k] - ar[i])
        {   cout << " i : " << i << endl ;
            cout << "ar[i+k] - ar[i] : " << ar[i+k] << " - " << ar[i] <<" : " <<  ar[i+k] - ar[i]  << endl ;
            a = i + 1;
            cout << " a : " << a << endl ;
            m = ar[i + k] - ar[i];
            cout  << "m : " << m << endl ;
        }
    }

    cout << a << endl;
}
void clocks()
{
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << " ms"
                                                                              "\n";
#endif
}

int main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif

    solve();
    clocks();

    return 0;
}