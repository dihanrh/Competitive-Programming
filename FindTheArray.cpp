#include<iostream>
#include<cmath>
using namespace std ;

int main ()
{  
    int  t , a ;
    cin >> t ;

    while (t --)
    {
        cin >> a ;
        cout << ceil (sqrt(a)) << endl ;
    }
    

    return 0 ;
}