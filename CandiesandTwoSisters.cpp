#include <iostream>


using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, ans = 0;

    while (t--)
    {
        cin >> n;
        if (n % 2 == 0)
            ans = n / 2 - 1;
        else
            ans = n / 2;
        cout << ans << endl;
    }

    return 0;
}