#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    

            int n ; 
            int inp ;
            int a = 0 , b  = 1 , ans ; 

            for ( int i = 0  ; i <  n; i ++)
            {
                cin>> inp ;
                if ( inp == 1 )
                {
                    a ++ ;
                }
                else if  ( inp == 0)

                {
                    b *= 2  ;
                }
            }
            ans =  a  * b  ;

            cout << ans  << "\n" ;

  

   
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
           freopen("inputFile.txt", "r", stdin);
           freopen("outputFile.txt", "w", stdout);
    int t ;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        //    cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}