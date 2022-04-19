/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string h = "I hate it";
    string l = "I love it";

    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
            cout << "I hate that ";

        else
            cout << "I love that ";
    }

    if (n % 2 != 0)
        cout << h;
    else
        cout << l;

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
main()
{

    int i, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << ((i % 2 != 0) ? "I hate " : "I love ");
        cout << (i != n ? "that " : "it");
    }
}