<<<<<<< HEAD
//https://codeforces.com/contest/1659/problem/A
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
     int n , r , b ;
     cin >> n >> r >> b ;

     int rat = r / (b+1) ;
     int rim = r % (b+1) ;

     for ( int i  = 0 ; i < rim  ; i ++)
     {
      cout << string(rat+1 , 'R') << "B" ;
     }
     for (int  i = rim ; i < b ; i ++)
     {
      cout << string (rat , 'R') << "B" ;
     }
     cout << string(rat , 'R') ;



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
=======
//https://codeforces.com/contest/1659/problem/A
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;


void solve()
{
     int n , r , b ;
     cin >> n >> r >> b ;

     int rat = r / (b+1) ;
     int rim = r % (b+1) ;

     for ( int i  = 0 ; i < rim  ; i ++)
     {
      cout << string(rat+1 , 'R') << "B" ;
     }
     for (int  i = rim ; i < b ; i ++)
     {
      cout << string (rat , 'R') << "B" ;
     }
     cout << string(rat , 'R') ;



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
>>>>>>> 53bf326056844c09ff21c2135df222a20e3c225f
}