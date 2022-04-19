#include <iostream>
using namespace std;

int main()
{
    int n, m, a = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;

        if (m != 0)
        {
            a++;
        }
    }

    if (a < 1)
        cout << "EASY";

    else
        cout << "HARD";

    return 0;
}