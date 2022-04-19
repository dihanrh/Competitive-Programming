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
    int n, m, r = 0;

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 == 0)
            {
                if (i % 4 == 2 && j < m)
                    cout << ".";
                if (i % 4 == 2 && j == m)
                    cout << "#";

                if (i % 4 == 0 && j == 1)
                    cout << "#";
                if (i % 4 == 0 && j > 1)
                    cout << ".";
            }

            else
            {
                cout << "#";
            }
        }
        cout << endl;
    }

    return 0;
}
