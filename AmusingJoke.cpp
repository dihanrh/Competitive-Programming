#include <iostream>
#include <string.h>
#include<algorithm>
using namespace std;

int main()
{
    /* SANTACLAUS
DEDMOROZ
SANTAMOROZDEDCLAUS
SANTACLAUSDEDMOROZ

 */

    string s1, s2, s, ms;
    int f = 0, c = 0;
    cin >> s1 >> s2 >> s;

    ms = s1 + s2;
    
    sort (ms.begin() , ms.end()) ;
    sort (s.begin() , s.end()) ;

    if (ms == s ) cout << "YES" ;
    else cout << "NO" ;





    
    return 0;
}