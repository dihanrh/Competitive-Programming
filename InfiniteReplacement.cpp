/// https://codeforces.com/contest/1674/problem/C
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
                string s , t ; 
                cin >> s >> t ;

                sort( t.begin(), t.end()) ; 

                if ( t[0] == 'a') 
                {
                    if ( t.size() == 1 ) cout << 1 << "\n" ;

                    else cout << -1 << "\n" ;
                }
                else 
                {
                    cout << (long long ) pow ( 2 , s.size()) << "\n" ;

                    // binpow () can be used 
                    //https://cp-algorithms.com/algebra/binary-exp.html
                }
             }
    return 0 ;
}