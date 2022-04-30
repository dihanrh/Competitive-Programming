//https://codeforces.com/contest/1673/problem/0
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

                int n , sz = 0 , al = 0  , bb =  0 ;
                n = s.size() ;

                if(n % 2 == 0)
                {
                    for ( int i = 0 ; i < n ; i ++)
                    {
                        sz += int ( s[i]) - 96 ; 
                    }
                    cout << "Alice" << " " << sz  <<"\n" ;
                }

                else 
                {
                    if ( n < 3 )
                    {
                        cout << "Bob" << " " << int( s[0] - 96) << "\n" ; 
                    }
                   else 
                    {
                        if ( (int ( s[0]) - 96) > int ( s[n-1]) - 96 )
                        {
                            for ( int i = 0 ; i < n - 1 ; i ++)
                            {
                                al += int ( s[i]) - 96 ;
                            }

                            bb = int ( s[n-1]) - 96 ; 

                            if ( al > bb )
                            {
                                cout << "Alice" << " " << al - bb << "\n" ;
                            }
                            else 
                            {
                                cout << "Bob"  << " " << bb - al  << "\n" ; 
                            }
                        }
                        else 
                        {
                            for ( int i = 1 ; i < n ; i ++)
                            {
                                al += int ( s[i]) - 96 ;
                               
                                
                            }
                            bb = int ( s[0]) - 96 ; 
                            if ( al > bb )
                            {
                                cout << "Alice" << " " << al - bb  << "\n" ;
                            }
                            else 
                            {
                                cout << "Bob"  << " " << bb - al << "\n" ; 
                            }
                        }

                    }
                }

                
             }
    return 0 ;
}