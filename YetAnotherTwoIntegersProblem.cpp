#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, m;
        int dv, rim;
        cin >> a >> b;

        m = (a - b);
        m = abs(m);

        dv = m / 10;
        rim = m % 10;
        if (rim != 0)
            rim = 1;

        cout << dv + rim << endl ;
    }

    return 0;
}