#include<iostream>
using namespace std ;

int main ()
{
    int n ;
    cin >> n ;
    int a[n] , temp[n] ;

    for ( int i = 0 ; i < n ; i ++)
    {
       cin >> a[i] ;
    }

    for (int i = 0 ; i < n ; i++)
    {
        temp[i] = a[i] ;
        a[i] = a[i+1] ;
        a[i+1] = temp[i] ;
    }
    for ( int i = 0 ; i < n ; i ++)
    {
        cout << a[i] ;
    }

    return 0 ;
}