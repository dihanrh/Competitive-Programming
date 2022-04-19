#include <bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base :: sync_with_stdio(false) ;
    cin.tie(NULL) ;

    #ifndef ONLINE_JUDGE
    freopen("inputVS.txt" , "r" , stdin);
    freopen("outputVS.txt", "w" , stdout) ;
    #endif


    int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;
/*
        cout << "log :" << log(n) << endl;
        cout << "log 2 :" << log2(n) << endl;
        cout << "Ceil :" << ceil(log2(n)) << endl;
        cout << "floor :" << floor(log2(n)) << endl;
       */ 

       if (ceil(log2(n)) == floor(log2(n))  ) cout << "NO" << endl ;
       else cout << "YES" << endl ;
    }

    return 0;
}