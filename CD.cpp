//CD
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{

   long long int n , m   ; 
   // cin >> n >> m ;

  while (cin >> n and cin >> m )
  {
  	long long int x,  count   = 0   ; 
  	if ( n == 0 and m ==  0)
  	{
  		break ;
  	} 
  	 map < long long int , long long int > ar ; 
 

   for ( int i = 1  ; i <=  n ; i ++)
   {
      cin >> x ; 
      ar[x] = 1 ; 

   }

   for ( int i = 1 ; i <= m ; i ++)
   {
      cin >> x ; 
      if (ar[x] == 1)
      {
         count ++ ;
      }

   }
 cout << count << "\n" ;
   
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
     
    //  testCase () ;

   solve() ;
             
    return 0 ;
}