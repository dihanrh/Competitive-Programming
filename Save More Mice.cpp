#include <bits/stdc++.h>
using namespace std ;

int main ()
{
   
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif  

int t ;
cin >> t ; 
while ( t -- )
{
int n , k , cat = 0  , count = 0  ;
cin >> n  >> k ; 
int a[k] ;
 for ( int i = 0 ; i < k ; i ++)
    {
        cin >> a[i] ;
    }

    for ( int i = 0 ; i < k ; i ++)
    {
        if (cat >= a[i])
        break ; 

        cat += n - a[i] ;
        count ++ ; 

    }

    cout << count << endl ;
}


   

    return 0 ;
}