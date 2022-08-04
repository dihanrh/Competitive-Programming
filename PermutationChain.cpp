//https://codeforces.com/contest/1716/problem/B
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
   int n ; 
   cin >> n ; 
   int a[n+1] ;
   for ( int i = 1 ; i <= n ; i++)
   {
   //	cout << i <<" " ;
   	a[i] = i ;
   }
  // cout << "\n" ;
   
  // n -- ;
 
 cout << n << "\n" ;
 
   	for ( int j = n ; j >= 1 ; j --)
   	{
   		for ( int i = 1 ; i  <= n ; i ++)
   	{
   		
   		cout << a[i] << " " ;
   		
   			if ( a[i] == n )
   		{
   			 swap (a[i] , a[i-1]) ;
   			
   		}
   		
   	
   
   }
   
   cout << "\n" ;
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