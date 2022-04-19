#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000], n;
bool cheak()
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != i)
            return 0; // 3
    }
    return 1;
}
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
        int ans = 0, w = 1;
        cin >> n; // 3
        for (int i = 1; i <= n; i++)
            cin >> a[i]; // 3 2 1
        while (cheak() == 0)
        {
            int i;
            if (w % 2)
                i = 1;
            else
                i = 2;
            for (; i < n; i += 2) // i = 1
            {
                if (a[i] > a[i + 1]) // true
                {
                    swap(a[i], a[i + 1]); // 2 3 , 
                }
            }
            ans++, w++; // 1 2 , 2 3 , 
        }
        cout << ans << endl;
    }

    return 0;
}
