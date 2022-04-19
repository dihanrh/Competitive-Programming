/*
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int x = 0, y = 0, z = 0, ans = 0, a[n] = {0}, b[n] = {0};
        long long int a_min = 999999999, b_min = 999999999;
        int m = n * 2;

        for (int i = 1, j = m / 2 + 1; i <= m / 2, j <= m; i++, j++)
        {
            if (i >= 1 && i <= m / 2)
            {
                cin >> a[i];
                if (a[i] < a_min)
                {
                    a_min = a[i];
                }
            }
            if (j >= m / 2 + 1 && j <= m)
            {
                cin >> b[j];
                if (b[j] <= b_min)
                {
                    b_min = b[j];
                }
            }
        }
        /*
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] <= b_min)
                b_min = b[i];
        }
*/
/*
        for (int i = 1, j = m / 2 + 1; i <= m / 2, j <= m; i++, j++)
        {
            if (i >= 1 && i <= m / 2)
            {
                x = a[i] - a_min;
            }
            if (j >= m / 2 + 1 && j <= m)
            {
                y = b[j] - b_min;
            }
            z += (x > y) ? x : y;
        }

        cout << z << endl;
    }

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, gate = 0;
        cin >> n;
        long long c = 0;
        int ar[n], br[n], a = 999999999, b = 999999999;
        for (int i = 0; i < n; i++)
        {
            if (gate == 0)
            {
                cin >> ar[i];
                a = min(a, ar[i]);
            }
            else
            {
                cin >> br[i];
                b = min(b, br[i]);
            }

            if (i == n - 1 && gate == 0)
            {
                i = -1;
                gate++;
            }
        }
        //        for(int i=0;i<n;i++)
        //        {
        //            cin>>br[i];
        //            b=min(b,br[i]);
        //        }

        int t1[n], t2[n];
        for (int i = 0; i < n; i++)
        {
            t1[i] = ar[i] - a;
            t2[i] = br[i] - b;
            if (t1[i] > t2[i])
                c += t1[i];
            else
                c += t2[i];
        }
        cout << c << endl;
    }
    return 0;
}