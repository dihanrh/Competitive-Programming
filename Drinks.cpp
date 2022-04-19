#include<iostream>
#include<iomanip>
using namespace std ;

int main () 
{   
    cout << fixed << showpoint ;
    cout << setprecision(12) ;
    double n ; 
    double a , temp = 0 ;
    cin >> n ;
 

    for ( int i = 0 ; i < n ; i ++)
    {
        cin >> a ;
        temp += a  ;
        
    }
    
    cout << temp / n ;
}