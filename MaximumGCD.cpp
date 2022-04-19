#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, gcd, mx = 0;
        cin >> n;
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                gcd = max(i, j) % min(i, j);
                if (gcd == 0)
                    gcd = min(i, j);

                if (mx < gcd)
                    mx = gcd;
            }
        }
        
     //  mx = n / 2; 
        cout << mx << endl;
    }

    return 0;
}