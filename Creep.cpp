//https://codeforces.com/contest/1694/problem/A
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
    int a, b  ; 
    cin >> a >>  b ; 

    int ab =  abs ( a - b ) ;

    if (ab == 0 )
    {
      for ( int i  = 0  ; i < b ; i ++)
      {
         cout <<"1" ;
      }
      for ( int i  = 0  ; i < a ; i ++)
      {
         cout <<"0" ;
      }
    }

    else if( ab < a )
    {
      for ( int i  = 0  ; i < ab ; i ++)
      {
         cout <<"0" ;
      }
      for ( int i  = 0  ; i < b ; i ++)
      {
         cout <<"1" ;
      }
      for ( int i  = 0  ; i < (a -ab) ; i ++)
      {
         cout <<"0" ;
      }
    }

    else 
    {
      for ( int i  = 0  ; i < a ; i ++)
      {
         cout <<"0" ;
      }
      for ( int i  = 0  ; i < b ; i ++)
      {
         cout <<"1" ;
      }
    }

    cout << "\n" ;
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