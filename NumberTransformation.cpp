//https://codeforces.com/contest/1674/problem/A
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
                int x,y;
                cin>>x>>y;
                if(y % x!= 0)
                {
                    cout<< 0 <<" "<< 0 << "\n" ;
                }
                else
                {
                    cout<< 1 <<" "<< y/x << "\n";
                }
             }
    return 0 ;
}