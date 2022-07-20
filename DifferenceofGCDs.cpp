//https://codeforces.com/contest/1708/problem/B
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
   int n , l , r ; 
   cin >> n >> l  >> r; 

   int count = 1 ;
   vector <int> v ;

   v.push_back(l) ;

   for ( int i = 2 ; i <= n ; i ++)
   {
      if (!(l%i)) 
      {
         v.push_back(l) ;
         count  ++ ; 
      }
      else 
      {
         if (((l/i)+1)*i <= r )
         {
            v.push_back(((l/i)+1)*i) ; 
            count ++ ;
         }
         else
         {
            break ;
         }
      }
   }

   if( count == n )
   {
      cout <<"YES\n" ;

      for(auto i : v )
      {
         cout << i << " "  ;
      }
      cout <<"\n" ;
   }
   else
   {
      cout <<"NO\n" ;
   }
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