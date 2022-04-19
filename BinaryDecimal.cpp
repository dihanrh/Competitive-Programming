#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int rim, temp = 0;
        
        cin >> n;
        while (n != 0)
        {
            rim = n % 10;
            if (rim > temp)
                temp = rim;
            n = n / 10;
        }
        cout << temp << endl ;
    }

    return 0;
}