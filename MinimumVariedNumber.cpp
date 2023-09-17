//
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
    int n ;
    cin >>  n ; 
    int tmp ;
    tmp = n ;
    vector<int > v ;
    
    for ( int i = 9 ; i >= 1 ; i --)
    {
    	if (tmp - i >= 0)
    	{
    		tmp -= i ;
    		v.push_back(i) ;
    	}
    	
    }
    sort(v.begin(), v.end()) ;
    for(auto i : v )
    {
    	cout << i ;
    }
    cout <<"\n" ;
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