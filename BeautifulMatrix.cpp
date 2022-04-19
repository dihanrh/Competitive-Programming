#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, j, k, x;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cin >> k;
            if (k == 1)
            {
                x = abs(i - 3) + abs(j - 3);
            }
        }
    }

    cout << x << endl;
    return 0;
}