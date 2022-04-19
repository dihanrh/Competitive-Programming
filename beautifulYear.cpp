/*  
// brute force

#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

    while (true)
    {
        year++;
        int a = year / 1000;
        int b = year / 100 % 10;
        int c = year / 10 % 10;
        int d = year % 100 % 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << year;
            return 0;
        }
    }

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    while (n++) // year ++  // 1987 ++
    {
        i = n;  // i = 1987
        int a[10] = {0};
        while (i > 0)
        {
            if (a[i % 10]++ == 1)  // 1  9  8   7 
                break;
            i /= 10;
        }
        cout << i << endl ;

        if (i <= 0)    // 
        {
            cout << n << endl;
            return 0;
        }
    }
}
