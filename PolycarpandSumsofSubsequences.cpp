#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> ar(7);
        for (int i = 0; i < 7; i++)
            cin >> ar[i];

        if (ar[0] + ar[1] == ar[2])
            cout << ar[0] << " " << ar[1] << " " << ar[3] << endl ;
        else
            cout << ar[0] << " " << ar[1] << " " << ar[2] << endl ; 
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