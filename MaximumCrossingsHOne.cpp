//https://codeforces.com/contest/1676/problem/H1
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
   int n ; 
   cin >> n ; 
   int ar[n] ;
   int cn = 0  ; 

   for( int i = 0  ; i < n ; i ++ )
   {
      cin >> ar[i] ;
   }
   for( int i = 0  ; i < n ; i ++)
   {
      for ( int j = i+1 ; j < n ; j ++)
      {
         if ( ar[i] >=  ar[j])
         {
            cn ++ ; 
         }
      }
   }

   cout << cn  << "\n" ; 
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