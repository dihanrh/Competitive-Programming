<<<<<<< HEAD
//https://codeforces.com/contest/1703/problem/C
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

 

    int x ; 
    string s ; 
    
    
    for ( int i = 0 ; i < n ; i ++)
    {
    int u = 0  , d = 0 ;
    int ud = 0 ;
  
      cin >> x ; 
      cin >> s  ;
      
      for ( int j = 0  ; j < x ; j ++)
      {
         if (s[j] == 'U')
         {

            u -- ;

         }
         else 
         {
            d ++ ;
         }

      }
      
         ud = u + d ;
         
         if (ud < 0 )
         {
         	ud += 10 ;
         }
		
		ar[i] += ud ;
		ar[i] %= 10 ;
		
		
     
    }
    
   

    for ( int i = 0  ; i < n ; i ++)
    {
      cout <<ar[i] <<" ";
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
=======
//https://codeforces.com/contest/1703/problem/C
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

 

    int x ; 
    string s ; 
    
    
    for ( int i = 0 ; i < n ; i ++)
    {
    int u = 0  , d = 0 ;
    int ud = 0 ;
  
      cin >> x ; 
      cin >> s  ;
      
      for ( int j = 0  ; j < x ; j ++)
      {
         if (s[j] == 'U')
         {

            u -- ;

         }
         else 
         {
            d ++ ;
         }

      }
      
         ud = u + d ;
         
         if (ud < 0 )
         {
         	ud += 10 ;
         }
		
		ar[i] += ud ;
		ar[i] %= 10 ;
		
		
     
    }
    
   

    for ( int i = 0  ; i < n ; i ++)
    {
      cout <<ar[i] <<" ";
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
>>>>>>> 53bf326056844c09ff21c2135df222a20e3c225f
}