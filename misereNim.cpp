//https://lightoj.com/problem/misere-nim
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
   int n  ; 
   cin  >> n ; 

   int ans ; 
   cin >> ans ;
   bool f = 1 ;
   if ( ans != 1)
   {
      f = 0 ;
   }


   int ar[n] ;
   for ( int i = 1 ; i < n ; i ++)
   {
      cin >> ar[i] ;
      if ( ar[i] != 1)
      {
         f  = 0 ;
      }
     

      ans ^= ar[i] ;
   }

   if (f)
   {
      if (n % 2 == 0)
      {
      	cout <<"Alice" <<"\n"  ; 
      }
      else 
      {
        cout <<"Bob" << "\n" ;  
      }
   }
   else 
   {
      if (ans)
      {
         cout <<"Alice" <<"\n"  ; 
      }
      else 
      {
        cout <<"Bob" << "\n" ;  
      }

   }





}

void testCase ()
{
   long long int t ;
   cin >> t ;
   int i = 0 ;


   while (t --)
   {
      i ++ ;
      cout << "Case "<< i <<": " ;
      solve() ; 
   }
}


int main ()
{   
   FAST ;
     
      testCase () ;
             
    return 0 ;
}