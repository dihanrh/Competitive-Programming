#include<bits/stdc++.h>
using namespace std ;

int main  ()
{

    int  n ;
    cin >> n ; 

    if ( n % 4 == 0   )
    {
    vector< int > a ,b ; 

    for ( int i = 1  ; i <= n ; i ++)
    {
        if(i % 4 == 1 or i % 4 == 0)
        {
            a.push_back(i) ;
        }
        else 
        {
            b.push_back(i) ;
        }
    }
         cout <<"YES\n" << a.size() <<"\n" ;

        for ( auto i : a)
        {
            cout <<i <<" " ;
        }

        cout <<"\n"<<b.size() << "\n";

        for(auto i : b)
        {
            cout <<i <<" " ;
        }
    }

    else if ( n % 4 == 3)
    {
        vector< int > a ,b ; 

    for ( int i = 1  ; i <= n ; i ++)
    {
        if(i % 4 == 1 or i % 4 == 2)
        {
            a.push_back(i) ;
        }
        else 
        {
            b.push_back(i) ;
        }
    }
         cout <<"YES\n" << a.size() <<"\n" ;

        for ( auto i : a)
        {
            cout <<i <<" " ;
        }

        cout <<"\n"<<b.size() << "\n";

        for(auto i : b)
        {
            cout <<i <<" " ;
        }
    }
    else 
    {
        cout <<"NO\n" ; 
    }


    return 0 ;
}