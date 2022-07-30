//https://codeforces.com/contest/1709/problem/B

/*


*/
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;
const int N = 1e5+7 ;

long long int pre[N] ; 
long long int suf[N] ;

void solve()
{
    int n ; 
    int m ; 
   
    cin >> n >> m ;
	 int a[n+1] = {0} ;
    for ( int i = 1 ; i <= n; i ++)
    {
        cin >> a[i] ;
    }

     pair <long long int , long long int > p[m] ; 
     
     for ( int i = 1 ; i <= m ; i ++ )
     {
        cin >> p[i].first  >> p[i].second ;
     }

     int tmp = n ; 
     int i = 1 ; 
     while(tmp --)
     {
        if (a[i] < a[i-1])
        {
            pre[i] = (a[i-1] - a[i]) + pre[i-1];
        }
        else 
        {
            pre[i] += pre[i-1] ;
        }
	
        i ++ ;
		

     }
    
    long long int inc = 0 ;
    for ( int i = 0 ; i <=  n ; i ++)
    {
    	if ( a[n-i] > a[n-i-1])
    	{
    		suf[n-i] =  inc ;
    		inc += a[n-i] - a[n-i-1] ;
    		suf[n-i-1] = inc ;
    	}
    	else 
    	{
    		
    		suf[n-i] = inc ;
    	}
        
        
    }
   
   long long int ans = 0  ;

     for ( int i = 1 ; i <=  m ; i ++)
     {
        if (p[i].first  < p[i].second )
        {
        	ans = pre[p[i].second] - pre[p[i].first] ;
            cout << ans  << "\n" ;
            
           
        }
        else
        {
        	ans = suf[p[i].second] - suf[p[i].first] ;
           cout << ans  << "\n" ;
           
          
        }
     }
     //cout << pre[p[5].second] - pre[p[5].first] ;
   
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
     
     // testCase () ;
   solve () ;
             
    return 0 ;
}