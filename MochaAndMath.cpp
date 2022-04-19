#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
/*
#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif
*/
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int ans;
        cin >> n;
        cin >> ans;
        int temp;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> temp;
            ans &= temp;
        }
        cout << ans << endl;
    }

    return 0;
}