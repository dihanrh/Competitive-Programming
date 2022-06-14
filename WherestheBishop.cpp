//
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
   long long int a , b , ans = 0 ; 

   cin >> a  ; 

   for( int i  = 0  ; i < 3 ; i ++ )
   {
      cin >> b ;

      if (a < b )
      {
         ans ++ ; 
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