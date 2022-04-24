//https://codeforces.com/contest/1672/problem/B
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
                cin >> s ;

                bool f = true  ;
                int n = s.size() ;
                int count = 0 ;

                if ( n == 1 or s[0] == 'B' or s[n-1] == 'A')
                {
                    cout <<"NO" << "\n" ;
                    continue ;
                }

                for ( int i = 0 ; i < n ; i ++)
                {
                    if ( s[i] == 'A')
                    {
                        count ++ ;
                    }
                    if ( s[i] == 'B')
                    {
                        count -- ;
                    }
                    if (count < 0)
                    {
                        f = false ;
                        break ;
                    }
                }

                if ( f)
                {
                    cout << "YES" << "\n" ;
                }
                else 
                {
                    cout <<"NO" << "\n" ;
                }

             }
    return 0 ;
}