#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {    
        
        long long int n, i, j, k = 1, tt = 0;
        cin >> n;
        
        if (n < 9)
            cout << "0";

        else
        {
            if (n % 10 == 9)
                tt++;
            n /= 10;
        }
        while (n > 0)
        {
            j = n % 10;
            cout << "j = n % 10  :" << j << endl ;
            j *= k;
            cout <<"j*k :" << j << endl ;
            tt += j;
            cout << "tt+=j :" << tt << endl ;
            n /= 10;
            cout << "n/=10 :" <<n << endl ;
            k *= 10;
            cout << "k*10 :" << k << endl ;
        }
        
        cout << tt;

    

      // cout << (n+1) / 10 << endl ;
    }

    return 0;
}