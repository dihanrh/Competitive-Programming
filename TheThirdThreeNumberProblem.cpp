//
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
   int n ; 
   
   cin >> n ;
   
   
   
   int a = 0 , b = n/2 , c  = n/2 ;
   
   
   if (n % 2 == 0)
   {
      n = (a^b) + (b^c) + (a^c) ;
   
    cout << a << " " << b << " " << c << "\n" ;
   }
   else 
   {
      cout << -1 << "\n" ;
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