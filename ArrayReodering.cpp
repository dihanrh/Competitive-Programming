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
        int n, x, ansEv = 0, ansOd = 0, lft = 1;
        cin >> n;

        vector<int> ev, od;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 == 0)
            {
                ev.push_back(x);
            }
            else
            {
                od.push_back(x);
            }
        }
        for (int i = 0; i < ev.size(); i++)
        {
            ansEv += n - lft;
            lft++;
        }
       // sort(od.begin(), od.end());
        for (int i = 0; i < od.size(); i++)
        {
            for (int j = i + 1; j < od.size(); j++)
            {
                if (__gcd(od[i], od[j]) > 1)
                {
                    ansOd++;
                }
            }
        }

        cout << ansEv + ansOd << endl;
    }

    return 0;
}