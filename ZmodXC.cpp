//https://codeforces.com/contest/1684/problem/B
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
                long long int a , b , c , x , y , z ; 
                cin >> a >> b >> c ; 

                x = 2*c - (2*c % b) + a ; 
                y = b % c ; 
                z = c % x ; 

                cout << x << " "<< y << " " << z << "\n" ;
             }
    return 0 ;
}