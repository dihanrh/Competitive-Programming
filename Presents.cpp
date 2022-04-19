#include<iostream>
using namespace std ;

int main ()
{   
    int n ;
    cin >> n ;

    int a[n] , x[n] ;

    for ( int i = 1 ; i <= n ; i ++)
    {
        cin >> a[i] ;

        x[a[i]] = i ;
        
    }
    
    for ( int i = 1 ; i <= n ; i ++)
    {
        cout << x[i] << " " ;
    }

    return 0 ;
}