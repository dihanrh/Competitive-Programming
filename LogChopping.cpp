//https://codeforces.com/contest/1672/problem/A
#include <bits/stdc++.h>
using namespace std ;

int main ()
{   
            ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);

             int tc ; 
             cin >> tc  ; 
             while ( tc -- )
             {
                int n ;
                cin >> n ; 
                int sum = 0 ;

                int x ;
                for ( int i = 0 ; i < n ; i ++)
                {
                    cin >> x ;
                    x -- ;
                    sum += x ;
                }
                if ( sum % 2 == 0)
                {
                    cout << "maomao90" << "\n" ;
                }
                else 
                {
                    cout << "errorgorn" << "\n" ;
                }

             }
    return 0 ;
}