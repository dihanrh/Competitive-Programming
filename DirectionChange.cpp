//https://codeforces.com/contest/1668/problem/A
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
                int n , m ; 
                cin >> n >> m ; 
                 int ans = 0 ; 
                int mn = min (n , m ) ;
                int mx = max ( n , m )  ;


                    if (mn == 1 and  mx > 2)
                {
                    cout << -1 << "\n" ;
                }

                else 
                {
                    if ( n > m  )
                    {
                        swap ( n , m ) ;
                    }

                   
                    if ( n != m   )
                    {
                        ans =  (mn -1)* 2 ;
                    }
                    else 
                    {
                        ans = (n-1)*2 ;
                    }

                    if ((m - n ) % 2 == 0 )
                    {
                        ans += ((m-n)/2)*4  ; 
                    }
                    else 
                    {
                        ans += ((m-n)/2)*4 + 1 ;  
                    }
                    cout << ans << "\n" ;
                }

                

             }
    return 0 ;
}