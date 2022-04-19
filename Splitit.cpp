#include<bits/stdc++.h>
using namespace std ;

int main ()
{   
    ios_base :: sync_with_stdio(false) ;
    cin.tie(NULL) ; // scanf 

    #ifndef ONLINE_JUDGE
    freopen("inputVS.txt" , "r" , stdin) ;
    freopen("outputVS.txt" , "w" , stdout) ;
    #endif

    int  t ;
    cin >> t ; 

    while ( t --)
    {
        int n , k , count = 0 ;
        string s ; 

        cin >> n >> k >> s ;

        if ( k == 0 )
        {
            cout << "YES" << endl ;
            
        }
        else 
        {
            for ( int i = 0 ; i < n / 2  ; i ++)
            {
                if ( s[i] == s[n-1-i])
                {
                    count ++ ;
                }
                else 
                {
                    break ;
                }
            }
        }

        if ( n % 2 == 0  )
        {
            if ( k <= count && k < n/2)
            {
                cout << "YES" << endl ;
            }
            else 
            {
                cout << "NO" << endl ;
            }
        }
        else 
        {
            if(k <=  count   )
            {
                cout << "YES" << endl ;
            }
            else 
            {
                cout << "NO" << endl ;
            }
        }


    }



    return 0 ;
}