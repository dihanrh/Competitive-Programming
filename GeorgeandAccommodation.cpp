#include<iostream>
using namespace std ;

int main ()
{   
    int p , q , n , count = 0 ;
    cin >> n ;

    for ( int i = 0 ; i < n ; i ++)
    {   
        p = q = 0 ;
        cin >> p >> q ;
        if (q - p > 1) count ++ ;
    }

    cout << count ;

    return 0 ;
}