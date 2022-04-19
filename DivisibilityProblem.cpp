/*

DDDDDDD         IIII    HHHH      HHHH          AAA          NNNNNNN      NNNN
DDDDDDDDDD      IIII    HHHH      HHHH         AAAAA         NNNNNNN      NNNN
DDD    DDDD     IIII    HHHHHHHHHHHHHH        AA   AA        NNNN  NNNN   NNNN
DDD    DDDD     IIII    HHHHHHHHHHHHHH      AAAAAAAAAAA      NNNN  NNNN   NNNN
DDDDDDDDDD      IIII    HHHH      HHHH     AAAAAAAAAAAAA     NNNN     NNNNNNNN
DDDDDDDD        IIII    HHHH      HHHH    AAAA       AAAA    NNNN       NNNNNN

*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    int a, b, temp;
    cin >> t;

    while (t--)
    {

        cin >> a >> b;
       
        if ( a % b == 0)
        cout << 0 << endl ;
        else 
        cout << b - (a % b) << endl ;
    }

    return 0;
}