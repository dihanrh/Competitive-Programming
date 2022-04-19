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

    long long t;
    cin >> t;

    while (t--)
    {

        string str ;
        cin >> str  ;

        sort ( str.begin() , str.end()) ;

        cout <<str << endl ;



        
    }

    return 0;
}