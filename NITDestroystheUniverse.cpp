//https://codeforces.com/contest/1696/problem/B
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;
/*
int mexFind(set<int>st)
{
	int mex = 0  ;
	while (st.find(mex) != st.end())
	{
		mex ++ ;
	}
	
	return mex ; 
}*/

void solve()
{
    int n ; 
    cin >> n ;
    
    int count = 0 ;
    int  f = 0 ;
 
    for ( int i = 0 ; i < n ; i ++)
    {
    	int x ;
    	cin >> x ; 
    	
    	if ( x and !f )
    	{
    		count ++ ;
    	}
    	f = x ;
    }
    
   
    cout << min ( count , 2) <<  "\n" ;
   
    
    
    
    
    
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