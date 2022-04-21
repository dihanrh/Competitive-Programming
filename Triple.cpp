// https://codeforces.com/contest/1669/problem/B

#include <bits/stdc++.h>
using namespace std ;

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
                  bool flag = false ;  
                  cin >> n ;
                  int arr[n] ;

                  for ( int i = 0 ; i < n; i++)
                  {
                    cin >> arr[i] ;
                  }

                  unordered_map<int, int> mp;

                  for (int i = 0; i < n; i++)
                    {
                        mp[arr[i]]++ ;
                    }

                    for (auto x : mp)
                    {   

                        if (x.second >= 3)
                        {
                            cout << x.first << "\n" ;
                            flag = true ;
                            break ;

                        }
                        
                    }
                    if ( flag == false )
                    {
                        cout <<-1 << "\n" ;
                    }
    


             }
    
    return 0 ;
}