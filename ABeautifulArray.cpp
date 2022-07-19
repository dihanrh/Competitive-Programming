//https://lightoj.com/contest/beggineriubat1/arena/problem/1544
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;

bool isPrime (int x)
{
   bool f = 1 ; 
   for ( int i = 2 ; i <=  x/2 ; i++)
   {
      if(!(x % i) )
      {
         f = 0 ;
         break ;
      }
   }

   return f ; 
}
void solve()
{
    int n ;
    cin >> n ; 

    vector<int > v ; 
    int inp ;
    

    for( int i = 0  ; i < n ; i ++)
    {
      cin >> inp ;
      if(isPrime(inp) and inp != 1 )
      {
         v.push_back(inp) ;
         
      } 
    }

    cout << v.size() << "\n" ;
    
   

    for (  int i : v )
    {
    	cout << i <<" " ; 
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