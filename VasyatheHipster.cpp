#include <iostream>
using namespace std;

int main()

{
    int a, b, m, p;
    cin >> a >> b;

    if (a >= b)

    {
        m = b;
        p = (a - b) / 2;
        cout << m << " " << p;
    }

    else
    {
        m = a;
        p = (b - a )/ 2;
        cout << m << " " << p;
    }

    return 0;
}