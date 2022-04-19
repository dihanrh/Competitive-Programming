#include<iostream>
using namespace std ;

int main()
{   
    int n , h ,count = 0 , p ;
    cin >> n >> h ;
    

    for ( int i = 0 ; i < n ; i ++)
    {
        cin >> p ;
        if (p > h)count = count + 2 ;
        else count ++ ;
        
    }
    cout << count ;

    return 0 ;
}