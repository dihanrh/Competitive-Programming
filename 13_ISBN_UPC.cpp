#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("inputFile.txt", "r", stdin);
    freopen("outputFile.txt", "w", stdout);
#endif

    

    string n;
    cin >> n;

    long long tmp, pos = 1 , po = 3, check_digit, mp = 0;
    
    int ns = n.size() ;
    for ( int i = 0 ; i < ns ; i ++)
    {   
        if ( i % 2 ==  0 )
        {
            cout <<"Position "<<pos <<" Multi :"<<( n[i]  - '0') * pos << "\n" ;
            mp += (n[i] - '0') * pos ; 
        }
        else 
        {
            cout <<"Position "<<po <<" Multi :"<<( n[i]  - '0') * po << "\n" ;
            mp += (n[i] - '0') * po ; 
        }
        
    } 


     cout << "mp : " << mp << endl ;
    check_digit = 10 - (mp % 10);
    cout << "Check Digit : " << check_digit << "\n";
    cout << "Number " << n <<check_digit <<  "\n";
    
    
    return 0;
}