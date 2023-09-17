<<<<<<< HEAD
//https://codeforces.com/contest/1689/problem/A
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;

void solve()
{
    int n , m  , k ; 
    cin >> n  >>  m >> k ;
    string a , b , c  ; 
    cin >> a >> b ; 
    
    sort( a.begin() , a.end(), greater<char>()) ;
    sort(b.begin() , b.end(), greater<char>()) ;
    
    int ak = 0 , bk = 0 ;
    
    while( !a.empty() and !b.empty())
    {
    	bool f = b.back() < a.back () ;
    	
    	if(f and bk == k)
    	{
    		f = 0 ;
    	}
    	if (!f and ak == k)
    	{
    		f =  1 ;
    	}
    	
    	if (f)
    	{
    		c.push_back(b.back()) ;
    		bk++ ;
    		ak = 0 ;
    		b.pop_back() ;
    		
    	}
    	else 
    	{
    		c.push_back(a.back()) ;
    		ak++ ;
    		bk = 0 ;
    		a.pop_back() ;
    	}
    }
    
    cout << c << "\n" ;



    
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
//https://codeforces.com/contest/1689/problem/A
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;

void solve()
{
    int n , m  , k ; 
    cin >> n  >>  m >> k ;
    string a , b , c  ; 
    cin >> a >> b ; 
    
    sort( a.begin() , a.end(), greater<char>()) ;
    sort(b.begin() , b.end(), greater<char>()) ;
    
    int ak = 0 , bk = 0 ;
    
    while( !a.empty() and !b.empty())
    {
    	bool f = b.back() < a.back () ;
    	
    	if(f and bk == k)
    	{
    		f = 0 ;
    	}
    	if (!f and ak == k)
    	{
    		f =  1 ;
    	}
    	
    	if (f)
    	{
    		c.push_back(b.back()) ;
    		bk++ ;
    		ak = 0 ;
    		b.pop_back() ;
    		
    	}
    	else 
    	{
    		c.push_back(a.back()) ;
    		ak++ ;
    		bk = 0 ;
    		a.pop_back() ;
    	}
    }
    
    cout << c << "\n" ;



    
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