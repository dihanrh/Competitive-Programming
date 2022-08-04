//https://codeforces.com/contest/1714/problem/B
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
    int n ; 
    cin >> n ; 

    int ar[n] ;

    for ( int i = 0 ; i < n ; i ++)
    {
        cin >> ar[i] ;
    }

    set<int > st ; 
    int count = 0 ;

    for ( int i = n-1 ; i >= 0 ; i --)
    {
        st.insert(ar[i]) ;
        count ++ ;

        if (count != st.size()) 
        {
            break ;
        }
    }

    cout << n - st.size() << "\n" ;
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