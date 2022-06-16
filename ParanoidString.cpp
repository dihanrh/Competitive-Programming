//https://codeforces.com/contest/1694/problem/B
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
    int  n ;
    cin >> n ;
    string s ;
    cin >> s ; 

   long  long int ans = n ;

    for ( int i =  1 ; i < n ; ++i )
    {
      if (s[i] != s[i-1])
      {
         ans += i ;
      }
    }

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