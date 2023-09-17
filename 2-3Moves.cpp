<<<<<<< HEAD
//https://codeforces.com/contest/1716/problem/A
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
    long long int  n ;
    cin >> n ; 

    long long int ans = 0 ; 

    ans = n / 3 ;
    
    if( n == 1)
    {
    	ans ++ ;
    }
    
    if (n%3 !=  0)
    {
        ans ++ ;
    }

    cout << ans << "\n" ;
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
//https://codeforces.com/contest/1716/problem/A
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
    long long int  n ;
    cin >> n ; 

    long long int ans = 0 ; 

    ans = n / 3 ;
    
    if( n == 1)
    {
    	ans ++ ;
    }
    
    if (n%3 !=  0)
    {
        ans ++ ;
    }

    cout << ans << "\n" ;
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