/*
#include<iostream>

using namespace std ;

int main ()
{
   long long  int n , a = 0 ;
    cin >> n ;

    if ( n % 2 == 0 )
    {
        a = n /  2 ;
    }
    else 
    {
        a = - (( n /2 )+1) ;
    }

    cout << a   ;

    return 0 ;
}
*/

#include <bits/stdc++.h>
using namespace std;

main()
{
    long long n;
    cin >> n;
    cout << (n % 2 == 0 ? n / 2 : n / 2 - n);
}
