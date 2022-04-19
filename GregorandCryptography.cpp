#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        // set <int> rim ;

        cin >> n;
        /*
    for ( int i = 2 ; i < n ; i ++)
    {
        rim.insert(n % i) ;
    }

    cout << "*******" << endl ;

    set <int> ::  iterator it ;

    for ( it = rim.begin() ; it != rim.end() ; it ++ )
    {
        cout << *it << "  " ; 
    }
*/
        //   long long int a, temp;

        /* for (int i = 2; i < n; i++)
    {
        a[i] = n % i;
    }
*/
        /*
        for (int j = 2; j < n; j++)
        {
            temp = n % j;
            for (int i = 3; i < n; i++)
            {
                a = n % i;

                if (temp == a)
                {
                    cout << j << " " << i << endl;
                    break ;
                }
            }
        }
    }
*/
        /*
        long long int j = 2;
        int flag = 0;
        while (true)
        {
            temp = n % j;
            for (int i = 3; i <= n/2 ; i++)
            {
                a = n % i;

                if (temp == a && i != j )
                {
                    cout << j << " " << i << endl;
                    flag = 1;
                    break;
                }
            }

            j++;

            if (flag == 1)
            {
                break;
            }
        }
        */
        if (n % 2 != 0)
        {
            n--;
        }
        cout << 2 << " " << n << endl;
    }

    return 0;
}