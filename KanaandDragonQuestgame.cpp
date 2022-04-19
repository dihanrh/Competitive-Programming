#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, h, count = 0;
        cin >> h >> n >> m;  // 100 3 4

        while (h > 20 && n > 0)
        {
            h = (h / 2) + 10; // 30
            n--;
        }
        while (h > 0 && m > 0)
        {
            h = h - 10;  //  -10
            m--;

            if (h <= 0) // true 
            {

                count++; // 1
                break;
            }
        }
        if (count == 1) // true 
        {
            cout << "YES" << endl; 
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}