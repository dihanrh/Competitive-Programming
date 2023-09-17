<<<<<<< HEAD
//https://codeforces.com/contest/1714/problem/A
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
    int n , bh , bm ;
    cin >> n >> bh >> bm ;

    int tmp = 0 ;
	bool f = 1 ;
    int ah , am ;

    int mbm = (bh*60)+bm ;
    int mn = 0 ;
     int ans = 1e8  ;


    for ( int i = 0 ; i < n ; i++)
    {
    	cin >> ah >> am ;
    	tmp = ah *60 + am ;

    	if (tmp < mbm )
        {
            tmp += (24*60) ;
        }

	    	ans = min ( ans  , tmp - mbm ) ;


    }



    cout << ans / 60 << " " << ans % 60 << "\n" ;



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
//https://codeforces.com/contest/1714/problem/A
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
    int n , bh , bm ;
    cin >> n >> bh >> bm ;

    int tmp = 0 ;
	bool f = 1 ;
    int ah , am ;

    int mbm = (bh*60)+bm ;
    int mn = 0 ;
     int ans = 1e8  ;


    for ( int i = 0 ; i < n ; i++)
    {
    	cin >> ah >> am ;
    	tmp = ah *60 + am ;

    	if (tmp < mbm )
        {
            tmp += (24*60) ;
        }

	    	ans = min ( ans  , tmp - mbm ) ;


    }



    cout << ans / 60 << " " << ans % 60 << "\n" ;



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