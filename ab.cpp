#include <bits/stdc++.h>
using namespace std ;


int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif

    int a = 10 ;
    int b = 20 ;

    /*a = (a+b) - a ;
    b = (a+b) - b ;
*/
   a = a+b ; // 30
   b = a - b  ; // 10
   a = a - b ; // 20 
   

    cout << "a :" << a <<  endl << "b :" << b ;

    return 0;
}