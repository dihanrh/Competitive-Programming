//
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;

void solve()
{
    int n ; 
    cin >> n ;
    
    int a[n] , b[n] ;
    
    for ( int i = 0  ; i < n ; i ++)
    {
    	cin >> a[i] ;
    	b[i] = a[i] ;
    }
    
    sort(b , b + n) ;
    
    for(int i = 0  ; i < n ; i ++)
    {
    	if (( b[i] == a[i] ) and i != (n-1))
    	{
    		swap (b[i] , b[i+1]) ;
    	}
    	
    	if (( b[i] == a[i] ) and i == (n-1))
    	{
    		swap (b[i] , b[i-1]) ;
    	}
    }
    
    if (n == 1)
    {
    	cout << -1 << "\n" ;
    }
    else 
    {
    	for ( int i = 0 ; i < n ; i ++)
    	{
    		cout << b[i] << " ";
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