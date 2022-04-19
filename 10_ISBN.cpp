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

    string n;
    cin >> n;

    long long tmp, pos = 1, check_digit, mp = 0;
    
    int ns = n.size() ;
    for ( int i = 0 ; i < ns ; i ++)
    {
        cout <<"Position "<<ns - i +1  <<" Multi :"<<( n[i]  - '0') * (ns - i +1 ) << "\n" ;
        mp += (n[i] - '0') * ( ns - i +1 ) ;
    }
   
    check_digit = 11 - (mp % 11);
    cout << mp << endl ;
    cout << "Check Digit : " << check_digit << "\n";
    cout << "Number " << n <<check_digit <<  "\n";
    
    return 0;
}