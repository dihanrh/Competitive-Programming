//https://codeforces.com/contest/1703/problem/B
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
    set <char > dist ; 

    int n ;
    cin >> n ; 
    string s ; 
    cin >> s ;


    for ( int i = 0 ; i < n ; i++ )
    {
      dist.insert(s[i]) ;
    }

    int ans ;
    ans = s.size() - dist.size() ;
    ans += (dist.size() * 2 ) ;

    cout << ans << "\n" ;
}

void testCase ()
{
   long long int t ;
   cin >> t ;

   while (t --)
   {
      solve() ; 
   }
}


int main ()
{   
   FAST ;
     
      testCase () ;
             
    return 0 ;
}