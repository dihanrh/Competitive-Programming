#include<iostream>
#include<set>
#include<iterator>
#include<cctype>
using namespace std ;

int main ()
{
    int n , count = 0 ;
    string s ;
    cin >> n >> s ;
    
    set<char> x ;

    for (int i = 0 ; i < n ; i ++)
    {
        x.insert(tolower(s[i])) ;
       
    }
    if ( x.size() == 26 ) cout <<"YES" ;
    else cout << "NO" ;

    return 0 ;
}