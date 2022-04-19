#include<iostream>
using namespace std ;

int main ()
{

   long long  int  x  ;
    cin >> x ;
  long long   int n = x + 1 ;

    while (x % n != x)
    {
        n ++ ;
    }  
    cout << n ;
    
}