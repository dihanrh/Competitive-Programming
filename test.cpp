#include <bits/stdc++.h>

using namespace std;

// int check_if(int n, int f, int a[n], int c, int maxx, int minn)
// {

//     return minn;
// }

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

    // int n;
    // int minn = 0, maxx = 0, f = 0;
    // cin >> n;

    // vector<int> a(n);

    // for (int i = 0; i < n; i++)
    // {
    //     a[i] = i;
    // }

    // do
    // {
    //     int c = 0;
    //     //check_if(n, f, a[], c, maxx, minn);
    //     // cout << endl;
    //     for (int i = 0; i < n; i++)
    //     {
    //         // cout << a[i] << " ";
    //         c = a[i] ^ a[i + 1];
    //     }
    //     if (c > maxx)
    //     {
    //         maxx = c;
    //         if (f == 0)
    //         {
    //             minn = maxx;
    //             f++;
    //         }
    //     }
    //    // minn == check_if();
    //     if (minn < maxx)
    //     {
    //         minn = maxx;
    //     }
    // }

    // while (next_permutation(a.begin(), a.end()));
    // cout << minn;

    int n;
    cin >> n;

    string str[n];
    string s;

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    for (int i = 0; i < n; i++)
    {
        s = str[i];
        cout << s << " " << s.length() << endl;
    }

#include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int m = 1e7, x = 1;
        bool r = 1;
        for (int i = n - 1; i > 0; i--)
        {
            m = min(m, i - a[i]);

            if (m < 0)
            {
                m = 0;
            }
            if (i <= m)
                x++;
        }

        cout << x << endl;
    }

    return 0;
}
