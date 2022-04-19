#include <bits/stdc++.h>
#define ll long

using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t > 0)
    {

        ll n, k;
        cin >> n >> k;
        int ar[k];
        int c = 0;
        int x = k - 1;
        int count = 0;
        for (int i = 0; i < k; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar + k);

        while (c < ar[x] && count < k)
        {
            count++;
            c += n - ar[x];
            x--;
        }
        cout << count << endl;

        t--;
    }
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
    
    return 0;
}