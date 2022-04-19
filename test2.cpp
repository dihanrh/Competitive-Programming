#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif


    long long int count ;
    double n ;
    cin >> count;

    n = log2(count) + 1 ;

    cout << ceil(n) << endl ;

    return 0;
}
