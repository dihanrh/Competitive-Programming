#include <iostream>
using namespace std;

int main()
{
    string s, t;
    int i, j, count = 0;

    cin >> s;
    cin >> t;

    int n_s = s.size();
    int n_t = t.size();

    for (i = n_s - 1, j = 0; i >= 0, j < n_t; i--, j++)
    {
        if (s[i] == t[j])
            count ++ ;
    }

    if (count == n_s)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}