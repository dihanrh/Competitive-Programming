#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int a, b, c, d, mx;

    cin >> a >> b >> c >> d;
    mx = max(max(a, b), max(c, d));

    if (mx != a)
        cout << mx - a << " ";
    if (mx != b)
        cout << mx - b << " ";
    if (mx != c)
        cout << mx - c << " ";
    if (mx != d)
        cout << mx - d << " ";

    return 0;
}