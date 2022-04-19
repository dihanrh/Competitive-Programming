#include <iostream>
#include <vector>
using namespace std;

int main()
{ /*
    int t;
    cin >> t;
    while (t--)
    {
        int n, od = 0, ev = 0;
        cin >> n;
        
        vector<int>a ;

        
         for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                a.push_back(i);
                ev += i;
                // cout << a[i] << " ";
            }
           
        }
        
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                a.push_back(i);
                od += i;
                // cout << a[i] << " ";
            }
           
        }


        //  cout << endl
        //     << od << endl
        //  << ev << endl;
        int x = ev - od;
        // od = od + (ev - od);
        if ((x + a[n]) % 2 == 0)
        {
            x = x - 1;
            a[n] = a[n] + x;
        }
        od = od + x;
        if (ev == od)
        {
            cout << "YES" << endl;
            //  a[n - 1] = a[n - 1] + x;

            for (int i = 1; i <= n; i++)
            {
                cout << a[i] << " ";
            }
        }

        else
        {
            cout << "NO" << endl;
        }
        //  cout << endl
        //  << od << endl
        //   << ev << endl;
    }
    */
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 4 == 0) // n/2 % 2 , 6% 2 =  0 , n =  10 , 5%2 = 1 
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n / 2; i++)
                cout << i * 2 << ' '; // even ...
            for (int i = 1; i < n / 2; i++)
                cout << i * 2 - 1 << ' '; // odd ..
            cout << n + n / 2 - 1 << endl; // n = 8  :::: 8+8/2 -1 = 8+6-1 = 11
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}