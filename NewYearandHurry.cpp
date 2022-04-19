#include <iostream>
using namespace std;
int main()
{
    int n, k, count = 0, t = 0;
    cin >> n >> k;

    int l = 240 - k;
    for (int i = 1; i <= n; i++)

    {
        t += i * 5;
        if (t <= l)
        {
            count++;
        }
    }

    cout << count++;

    return 0;
}
