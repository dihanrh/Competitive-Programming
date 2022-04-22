// https://codeforces.com/contest/1671/problem/A
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
                 
                  int ca = 1  ;

                  for ( int i = 1 ; i < s.size() ; i ++)
                    {
                        
                        if (s[i] == s[i-1])
                        {
                            ca ++ ; 
                        }
                        else 
                        {
                            if ( ca == 1) 
                            {
                                break ;
                                
                            }
                            ca = 1 ; 
                        }
                        
                    }


                    if (ca == 1)
                    {
                        cout <<"NO" << "\n" ;
                    }
                    else
                    {
                        cout << "YES" << "\n" ;
                    }
    }
    return 0 ;
}