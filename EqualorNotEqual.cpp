#include <bits/stdc++.h>
using namespace std;

void slv()
{
    string s;
    int count = 0;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'N')
        {
            count++;
            if (count > 1)
            {
                break;
            }
        }
    }

    if (count == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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

        int t;
        cin >> t;
        while (t--)
        {
            slv();
        }

        return 0;
    }