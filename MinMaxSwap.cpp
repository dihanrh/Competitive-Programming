#include <bits/stdc++.h>
using namespace std;

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

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int z = 0, o = 0;

        for (int i = 0; i < s.size() ; i++)
        {
            if (s[i] == '0')
            {
                z++;
            }
            if (s[i] == '1')
            {
                o++;
            }
        }

        if (z == o)
        {
            cout << o - 1 << "\n";
        }
        else
        {
            cout << min(z, o) << "\n";
        }
    }

    return 0;
}
