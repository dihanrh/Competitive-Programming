//https://codeforces.com/contest/1676/problem/B
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
                int ar[n]  ; 
                int sum = 0 ; 
                int min = INT_MAX ;


                for ( int i = 0 ; i < n ; i ++)
                {
                	cin >> ar[i] ;
                	if (ar[i] <= min )
                	{
                		min = ar[i] ; 
                	}
                }

                 for ( int i = 0 ; i < n ; i ++)
                {
                	if (ar[i] > min )
                	{
                		sum += (ar[i] - min)  ;
                	}
                }

                
                cout << sum << "\n" ; 
             }
    return 0 ;
}