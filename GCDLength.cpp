#include <bits/stdc++.h>

using namespace std;

int a, b, c, t;

int main()
{
    cin >> t;
    while (t--)
    { 
/*
    4
2 3 1
2 2 2
6 6 2
1 1 1
*/
        cin >> a >> b >> c;
        int x = pow(10, a - 1) + pow(10, c - 1); // 10 + 1  10+10  1+1
        int y = pow(10, b - 1); // 99    10   1
        cout << x << " " << y << endl;
       //  int gcd ;
       // gcd = __gcd(x , y ) ;
       //  cout <<"GCD :"<< gcd << endl ;
    }

    return 0;
}