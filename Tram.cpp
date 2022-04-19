#include<iostream>
using namespace std ;

int main ()
{
   int n ,   out , in , cap_min = 0 , mx = 0 ;
   cin >> n ;
   for ( int i = 0 ; i < n ; i ++)
   
   {
       cin >> out >> in ; 

       cap_min += in - out ;
       if (mx < cap_min)
       mx = cap_min ;
   }
   cout << mx ;

return 0 ;
}