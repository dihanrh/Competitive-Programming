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
        int n;
        cin >> n;
        int count = 0;
        int a[2000];

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] != i)
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << 0 << endl;
        }
        else if (a[1] == 1 || a[n] == n)
        {
            cout << 1 << endl;
        }
        else if (a[1] == n && a[n] == 1)
        {
            cout << 3 << endl;
        }
        
        else if (a[1] != 1 && a[n] != n)
        {
            cout << 2 << endl;
        }
        
    }

    return 0;
}