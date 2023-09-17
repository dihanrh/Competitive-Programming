//https://codeforces.com/contest/1679/problem/A
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
    long long int n ;
    long long int mn , mx ;

    cin >> n ;

    if ( n < 4 or  n & 1 )
    {
    	cout << -1 <<"\n" ;
    }
    else
    {
    	mx = n /  4;
    	mn = n / 6 ;

    	if (n % 6 )
        {
            mn ++ ;
        }

    	cout << mn << " " << mx << "\n" ;
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