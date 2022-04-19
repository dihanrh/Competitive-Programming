#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 0;
        string s;
        cin >> n >> s;

        string s_copy = s;

        sort(s_copy.begin(), s_copy.end());

        for (int i = 0; i < n; i++)
        {
            if (s[i] != s_copy[i])
            {
                k++;
            }
        }
        cout << k << endl;
    }

    return 0;
}

