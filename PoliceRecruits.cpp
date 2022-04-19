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
    int n, cr, unt = 0, thr = 0 ;
    cin >> n;

    // 8
    //1 -1    1 -1      -1    1 1 1
    // 0      0         1      ....
    

    for (int i = 0; i < n; i++)
    {
        cin >> cr ;
        if ( cr >= 1 )
        {
            thr += cr ;
        }
        else 
        {
            if (thr < 1)
            {
                unt ++ ;
            }
            else
            {
                thr -- ;
            }
        }
    }

   

    cout << unt;

    return 0;
}