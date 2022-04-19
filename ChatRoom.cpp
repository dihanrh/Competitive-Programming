
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0;
    string x, y;
    cin >> x;
    y = "hello";
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == y[a])
            a++;
        if (a == 5)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}