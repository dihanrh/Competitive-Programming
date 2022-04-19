//******HAPPY BIRTHDAY PETAYA !!! :xD *********

#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, tm;

        cin >> n;

        // tm = ((n / 10) * 25) + ( ceil (((n % 10) / 8))* 20) + (ceil((((n % 10) / 8) / 6)) * 15);
        /* tm = (n/ 10 ) * 25 ;

    if ((n % 10 ) % 6 == 0  || ( n% 10 ) <= 6 )
    {
        tm += (ceil(((n%10) / 6 ))) * 15 ;
    }
    else if ((n % 10 ) % 8 == 8 || (n % 10) > 6 && (n % 10 ) <= 8 )
    {
        tm += (ceil(n % 10 )/ 8 ) * 20 ;
    }
    */

        /*     if (n % 6 == 0)
        {
            tm = (n / 6) * 15;
        }
        else if (n % 6 != 0 && (n % 6) <= 2)
        {
            if (n % 8 == 0)
            {
                tm = (n / 8) * 20;
            }
            else
            {
                n++;
                tm = (n / 8) + 20;
            }
        }
        else if (n % 6 != 0 && (n % 6) > 2)
        {
            if (n % 10 != 0)
            {
                n = n + 1;
                if (n % 10 == 0)
                {
                    tm = (n / 10) * 25;
                }
                else if (n % 10 != 0 && (n % 10) <= 6)
                {
                    tm = (n / 10) * 25 + 15;
                }
                else
                {
                    tm = (n / 10) * 25 + 20;
                }
            }
        }
        cout << tm << endl;    */
        /*

       if ( n < 6) cout << 15 << endl ;

       else 
       {
           tm =  ((n + 1 )/2 )* 5 ;
           cout << tm << endl ;
       }
    }
*/

        if (n < 6)
        {
            tm = 15;
        }
        else
        {
            if (n % 6 != 0)
            {
                if (n % 6 < 2)
                {
                    if ((n + 1) % 8 == 0)
                    {
                        n++;
                        tm = (n / 8) * 20;
                    }
                }
                else
                {
                    if (n % 8 != 0)
                    {
                        if (n % 10 != 0)
                        {
                            n++;
                            if (n % 10 != 0)
                            {
                                tm = (n / 10) * 25 + 15;
                            }
                            else
                            {
                                tm = (n / 10) * 25;
                            }
                        }
                    }
                }
            }
        }

        cout << tm << endl;
    }
    return 0;
}