#include<iostream>
using namespace std ;

int main()
{
    
    int k , r ;

    cin >> k >> r ;
    int  i ;

    for ( i = 1 ;; i ++)
    {
        if (i*k % 10 == 0 || i*k % 10 == r )
        
        {
            cout << i ;
            return 0 ;
        }
    }

    return 0;
}