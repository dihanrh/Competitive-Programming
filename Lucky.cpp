//https://codeforces.com/contest/1676/problem/A
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
                int sumF = 0 , sumS = 0 ; 
                cin >> s ;

                for ( int i = 0 ; i < 6 ; i ++)
                {
                    if (i>= 0 and i < 3)
                    {
                        sumF += s[i]- '0' ; 
                    }
                    if (i>= 3 and i < 6)
                    {
                        sumS += s[i]- '0' ; 
                    }
                }

                if ( sumF == sumS)
                {
                    cout <<"YES"  << "\n" ;
                }
                else 
                {
                    cout << "NO"  << "\n" ;
                }
                
             }
    return 0 ;
}