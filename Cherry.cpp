#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        long long int a[n] = {0}, d[n];

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        /*
    sort(a, a + n);
    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        d[i] = a[j];
    }
    long long int max = 0, temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = a[i] * d[i];
        if (temp > max)
            max = temp;
    }

    cout << max;

    long long int mx = 0, temp = 0;

    for (int i = 0; i < n; i++)
    {
        temp =  max (i , i + 1)  *  min (i , i + 1 ) ;
    if ( temp > mx ) mx = temp ;
        
    }

    cout << mx << endl;
    */
        long long ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans = max(ans, a[i - 1] * a[i]);
        }
        cout << ans << endl;
    }

    return 0;
}
