#include<bits/stdc++.h>
using namespace std ;

int main ()
{
   int t ; 
   cin >> t ; 

   while (t --)
   {
       int n ;
       vector<int> v ;
       cin >> n ;

       for ( int i = 1 ; i < 2000 ; i ++ )
       {
           if( i % 3 != 0 && i % 10 != 3 )
           {
               v.push_back(i) ;
           }
           if (v.size() >= 1001)
           {
               break ;
           }
       }
      n -= 1 ;
       cout << v[n] << endl ;


   }
   





    return 0 ;
}