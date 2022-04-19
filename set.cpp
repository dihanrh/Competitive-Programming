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

    set <int> s = {6, 10, 5, 1};
    s.insert(10) ;
    s.insert(5) ;
    s.insert(500);
    s.insert(251) ;
    s.insert(50) ;
    s.insert(10) ;

    set <int>  :: iterator it  = s.begin() ;
    for ( ; it != s.end() ; it ++)
    {
        cout << *it << endl ;
    }

    return 0;
}