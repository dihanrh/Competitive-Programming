#include <bits/stdc++.h>
using namespace std;

    int main()
    {

        ios_base ::sync_with_stdio(false);
        cin.tie(NULL);
        cin.tie(0);
        cout.tie(0);

#ifndef ONLINE_JUDGE
        freopen("inputVS.txt", "r", stdin);
        freopen("outputVS.txt", "w", stdout);
#endif

       long  int t ;
        cin >> t ; 
        
        while (t --)
        {
            int n ;
            cin >> n ;

            long long int a[n] ;
            
            for ( int i = 0  ; i < n ; i ++)
            {
                int x ; 
                cin >> x ; 
                a[i] =  x ;
            }

            sort ( a , a + n  ) ;
          /*  for ( int i =  0 ; i < n ; i ++)
            {
                cout << a[i] << endl ;
            }
            */

            long long int z ;

            z  = a[n-1] -  a[0] ;

            cout <<   z << endl ; 
            
        }


        return 0;
    }