#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);
/*
#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif
*/
    long int t;

    cin >> t;
    while (t--)
    {
        long long int a, b,rsum = 0 ,  sum, ra = 0, rim = 0, rb = 0;
        cin >> a >> b;
        while (a != 0)
        {
            rim = a % 10;
            ra = ra * 10 + rim;
            a /= 10;
        }
        while (b != 0)
        {
            rim = b % 10;
            rb = rb * 10 + rim;
            b /= 10;
        }

        sum = ra + rb ;

        while (sum != 0)
        {
            rim = sum % 10;
            rsum = rsum * 10 + rim;
            sum  /= 10;
        }

        cout << rsum << endl ;
        
    }

    return 0;
}
