//https://codeforces.com/contest/1708/problem/A
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
    int n  ; 

    cin >> n ; 
    int x , y , ans = 1 ;
    cin >> x ;

    for ( int i  = 1 ; i < n ; i ++)
    {
      cin >> y ;
      if (y % x )
      {
         ans = 0  ;
      }
    }

   ans ? cout <<"YES\n" : cout <<"NO\n" ;
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