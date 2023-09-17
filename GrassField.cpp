<<<<<<< HEAD
//https://codeforces.com/contest/1701/problem/A
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
    int r = 0  , c  = 0 , n  ; 

   for ( int i = 0  ; i < 4 ; i ++)
   {
      cin >> n ;
      if (i < 2 )
      {
         r += n ;
      }
      else 
      {
         c += n ;
      }
   }

   int ans = 0 ;
   if ((r == 0 and c != 0) or (r != 0 and c == 0) )
   {
   	ans =  1 ;
   }
   else 
   {
   	ans =  min ( r , c ) ; 
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
=======
//https://codeforces.com/contest/1701/problem/A
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
    int r = 0  , c  = 0 , n  ; 

   for ( int i = 0  ; i < 4 ; i ++)
   {
      cin >> n ;
      if (i < 2 )
      {
         r += n ;
      }
      else 
      {
         c += n ;
      }
   }

   int ans = 0 ;
   if ((r == 0 and c != 0) or (r != 0 and c == 0) )
   {
   	ans =  1 ;
   }
   else 
   {
   	ans =  min ( r , c ) ; 
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
>>>>>>> 53bf326056844c09ff21c2135df222a20e3c225f
}