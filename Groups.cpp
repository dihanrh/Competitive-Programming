#include <bits/stdc++.h>
using namespace std ;

int main ()
{
   ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif

    int t ;
    cin >> t ;
    while (t --)
    {
        int n ;
        cin >> n ;
        int a[n] [5] ;
        int tmp ;

        for (int i =  0  ;  i < n ; i ++)
        {
            for ( int j = 0 ; j < 5 ; j ++)
            {
                cin >> tmp ; 
                a[i][j] = tmp  ;
            }
        }

        for (int i =  0  ;  i < n ; i ++)
        {
            for ( int j = 0 ; j < 5 ; j ++)
            {
                tmp = a[i][j] ;
                cout <<  tmp ; 
            }
        }
    }




    return 0 ; 
}
