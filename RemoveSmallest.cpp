#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        int count = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort (a , a+n ) ;
        for (int i = n-1; i > 0; i--)
        {

            if (a[i]-a[i-1] <= 1)
            {
                count++;
            }
        }
        if (n == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (count == n - 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}