//https://codeforces.com/contest/1674/problem/B
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
                int a =  25 * ( s[0]- 'a') + (s[1] - 'a') ; 
                if (s[1] < s[0])
                {
                	 a ++ ;
                }
                cout << a  << "\n" ;
                
             }
    return 0 ;
}