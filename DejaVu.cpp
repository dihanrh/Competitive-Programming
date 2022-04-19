#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        /*
        if (s[0] != 'a')
            s += "a", cout << "yes" << endl
                           << s << endl;
        else if (s[s.size() - 1] != 'a')
            s = "a" + s, cout << "yes" << endl
                              << s << endl;
        else cout << "no" << endl ;
    }
*/
        /*  int z = 0, x, no = 0;
        //for (int i = 0, j = s.size() - 1; i < s.size(); i++, j--)
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != s[s.size() - 1 - i])
            {
                z = 1;
                break;
            }
        }

        if (z == 1)
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != 'a')
                {
                    x = s.size() - i;
                    s.insert(x, "a");
                    no == 2;
                    cout << "yes" << endl
                         << s << endl;
                    break;
                }
            }
        }

        if (no != 2)
            cout << "no" << endl;
*/
        int testA = 0;
        int sz = s.size();
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'a')
                testA = 1;
        }
        if (testA == 0)
            cout << "NO" << endl;

        else
        {

            s += "a";
            cout << "YES" << endl
                 << s << endl;
        }
    }
    return 0;
}