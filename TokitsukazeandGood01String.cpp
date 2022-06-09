//https://codeforces.com/contest/1678/problem/B1
#include <bits/stdc++.h>
using namespace std ;

void dihan()
{
    
}

int main ()
{   
            ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);

             int tc ; 
             cin >> tc  ; 
             while ( tc -- )
             {
               int n ;
    string s; 

    cin >> n >> s ; 
    int count = 0 ;

    for ( int i = 0  ; i < n-1; i +=2 )
    {
      
      if (s[i] != s[i+1])
      {
         count ++ ; 
      }
    }

    cout << count << "\n"  ;
             }
    return 0 ;
}