/*
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        int ndigit = 0;
        int d = n;
        int z =  n ;

        while (d != 0)
        {   
            d /= 10;
            ndigit++;
        }

        int ir = 0, dv = 1;
        int nd = ndigit ;

        while (ndigit--)
        {
          //  dv *= 10;
            
            if (n % 10 != 0)
            {
                ir++;
            }
            n /= 10;
        }
      //  dv /= 10;
        cout << ir << endl;
        for (int i = 0 ; i < nd ; i++)
        {
            a[i] = z % 10 ;
           // cout << a[i] << " " ;
            z /= 10 ;
        }
        for (int i = 0 ; i < nd ; i++)
        {   
           // cout << a[i] << " " ;
            a[i] *= dv;
            dv *= 10 ;
            
            if (a[i] != 0)
            {
                cout << a[i] << " ";
            }
           // dv /= 10;
        }
        cout << endl;
    }

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, i, c;
    cin >> t;
    while (t--)
    {
        cin >> n;
        m = n;
        c = 0;
        i = 1;
        while (m)
        {
            if (m % 10)
                c++;
            m /= 10;
        }
        cout << c << endl;
        while (n)
        {
            if (n % 10) // if ( n % 10 != 0)
                cout << (n % 10) * i << " "; 
            n /= 10;
            i *= 10;
        }
        cout << endl;
    }
}
