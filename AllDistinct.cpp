//https://codeforces.com/contest/1692/problem/B
#include <bits/stdc++.h>
#define FAST ios::sync_with_stdio(0) ; cin.tie(0); cout.tie(0) ;
using namespace std ;

int di(int arr[], int n){
  
   sort(arr, arr + n);
  
   int count = 0;
   for (int i = 0; i < n; i++){

      while (i < n - 1 && arr[i] == arr[i + 1]){
         i++;
      }
      count++;
   }
   return count;
}

void solve()
{
    int n  ; 
    cin >> n ;
    int arr[n] ;

    for ( int i = 0  ; i < n ; i ++)
    {
      cin >> arr[i] ;
    }

   if ( (n - di(arr , n )) % 2 == 0 )
   {
      cout << di(arr, n)  << "\n" ;
   }
   else 
   {
      cout << di(arr , n) - 1 << "\n" ;
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