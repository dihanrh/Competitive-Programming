#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;

// short name
#define f first
#define s second
#define pb push_back
#define mp make_pair

// form
#define fl(i, a, b) for (int i = a; i <= b; i++)

int32_t main()
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
        long long a, b, ans = 0;
         cin >> a >> b;

        // long long maxx, minn;
        // maxx = max(a, b);
        // minn = min(a, b);

        // while (true)
        // {
        //     if (maxx == minn)
        //         break;
        //     else
        //     {
        //         if (maxx < minn)
        //             swap(maxx, minn);
        //         else
        //         {
        //             maxx -= minn;
        //             ans++;
        //         }
        //     }
        // }

        while (a && b)
        {
            if (a < b)
                swap(a, b);
            ans += a / b;
            a %= b;
        }
        cout << ans << "\n" ;
    }

    return 0;
}