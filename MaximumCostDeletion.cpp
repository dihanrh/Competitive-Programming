//https://codeforces.com/contest/1550/problem/B
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
                int a, b , n , count = 1 ; 
                cin >> n >> a >> b ; 
                string s ;
                cin >> s ;

                for (int i = 1 ; i < n ; i ++)
                {
                    if(s[i] != s[i-1])
                    {
                        count ++ ;
                    }
                }

                if (b >= 0)
                {
                    cout <<n*(a+b) << "\n";
                    continue ;
                }
                else
                {
                    cout << (count / 2 + 1) * b + a * n << "\n";
                }


                
             }
    return 0 ;
}