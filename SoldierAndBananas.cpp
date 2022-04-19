#include<iostream>
using namespace std ;

int main()
{
    int k , n , w  , N = 0;
    cin >> k >> n >> w ;

    for (int i = 1 ; i <= w ; i ++)
    {
        N += k*i ;
    }
    
    if ( n > N )
    cout <<"0";
    else 
    cout << N - n ;

    return 0 ;
}