//https://codeforces.com/contest/1681/problem/A
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
                int n  , m ; 
                int am = -1 , bm = - 1 ;
                cin >> n ;
                int a[n] ;
                for ( int i = 0 ; i < n ; i ++)
                {
                  cin >> a[i] ;
                  am = max(a[i] , am ) ;
                }
                cin >> m ;
                int b[m] ;
                for ( int i = 0 ; i < m ; i ++)
                {
                  cin >> b[i] ;
                  bm =  max ( b[i] , bm) ;
                }

                
                if(am == bm )
                {
                  cout << "Alice" << "\n" ;
                  cout << "Bob" << "\n" ;

                }
                else if (am > bm )
                {
                  cout << "Alice" << "\n" ;
                  cout << "Alice" << "\n" ;
                }

                else
                {
                  cout << "Bob" << "\n" ;
                  cout << "Bob"  << "\n" ;
                }

                
                


             }
    return 0 ;
}