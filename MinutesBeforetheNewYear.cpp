#include<bits/stdc++.h>
using namespace std ;

int main () 
{
    ios_base :: sync_with_stdio(false) ;
    cin.tie(NULL) ;

    #ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r" , stdin ) ;
    freopen("outputVS.txt" ,"w" , stdout ) ;
    #endif

    int t ;
    cin >> t ;
     while (t --)
     {
         int h , m ;
         cin >> h >> m ;

         int hm ;

         hm = (23 - h ) * 60 ;
         hm += (60 - m ) ;

         cout << hm << endl ;







     }

    return 0 ;
     
}