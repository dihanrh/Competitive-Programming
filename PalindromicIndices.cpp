//https://codeforces.com/contest/1682/problem/0
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
                string s ; 
                int n ; 
                cin >> n ;
                int m = n/2  ;
                cin >> s ; 
                int sum = 1 ;

                 for( int i = m ; i < n ; i ++)
                     {
                        if(i + 1 < n and s[i] == s[i+1] )
                        {
                           sum ++ ;
                        }
                        else 
                        {
                           break ;
                        }
                     }

                
               for( int i = m ; i >= 0 ; i --)
               {
                  if(i-1 >= 0 and s[i-1] == s[i] )
                  {
                     sum ++ ;
                  }
                  else 
                  {
                     break ;
                  }
               }

              
               cout << sum << "\n" ;
               
             }
    return 0 ;
}