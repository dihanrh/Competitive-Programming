//https://codeforces.com/contest/1682/problem/B
#include <bits/stdc++.h>
using namespace std ;

void dihan()
{
    int n ;
    cin >> n ; 

    vector < int > a(n) , b (n) ; 

    for ( int i = 0 ; i < n ; i ++)
    {
      cin >> a[i] ;
      b[i] = a[i] ;
    }

    sort ( b.begin() , b.end()) ;

    vector < int > dif ;

    for ( int i = 0 ; i < n ; i ++)
    {
      if( a[i] != b[i])
      {
         dif.push_back(a[i]) ;
      }
    }

    int ans = dif[0] ;
    for ( int i =1 ; i < dif.size() ; i ++)
    {
      ans = ans & dif[i] ;
    }
    cout << ans << "\n" ;
}

int main ()
{   
            ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);

             int tc ; 
             cin >> tc  ; 
             while ( tc -- )
             {
                dihan () ;
             }
    return 0 ;
}