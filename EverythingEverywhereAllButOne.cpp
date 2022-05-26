//https://codeforces.com/contest/1686/problem/A
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
                int n ; 
                cin >> n ; 
                bool f = false ;

                int a[n] ;
               
               

                for ( int i = 0 ; i < n; i ++)
                {
                  cin >> a[i] ;
                
                }
                int x = 0 ;
                int tmp = n ;
                
                while(tmp --)
                {
                	 int sum = 0 ;
                	 int am = 0 ;
                  for( int i = 0 ; i < n  ; i ++ )
                  {
                     if ( i != x )
                     {
                        
                        sum += a[i] ;
                       
                     }
                  }
                
                  am = sum / (n-1) ;
                 
               
                 
		 if ( am == a[x]  and sum % (n-1) == 0) 
                     {
                        f = true ;
                        break ;
                     }

                 
                  x ++ ;
                  
                 
                }

                if ( f == true )
                {
                  cout << "YES" << "\n" ;
                }
                else 
                {
                  cout << "NO" << "\n" ;
                }

             }
    return 0 ;
}