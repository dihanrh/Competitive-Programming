#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        double  sum = 0.0;
        cin >> n;
        long long  a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);
        
        cout << setprecision(9) << fixed <<(sum - (a[n - 1])) / (n - 1) + a[n-1] << endl;
    }

    return 0;
}