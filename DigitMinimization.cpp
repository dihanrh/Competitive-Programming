//https://codeforces.com/contest/1684/problem/A
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
                string  s , ans ; 
                cin >> s ;


                if (s.size() <= 2 )
                {
                  ans = s[1] ;
                }

                else 
                {
                  sort(s.begin() , s.end() ) ; 

                  ans = s[0] ;
                }

                cout << ans << "\n" ; 

             }
    return 0 ;
}