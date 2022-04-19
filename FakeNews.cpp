/*
#include <bits/stdc++.h>
using namespace std;

string findSubSeq(string main, string sub)
{
    int i = 0, count = 0;
    int msize = main.size();
    int ssize = sub.size();

    while (i < msize && count < ssize)
    {
        if (main[i] == sub[count])
            count++;
        i++;
    }

    if (ssize == count)
        return "YES";

    return "NO";
}

int main()
{

    string main, sub;
    cin >> main ;
    sub = "heidi" ;

    string result = findSubSeq(main, sub);
    cout << result << "\n";
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // heidi
    string s;
    cin >> s;
    int h = 0, e = 0, i = 0, d = 0;
    int count = 0;

    for (int j = 0; j < s.size(); j++)
    {
        if (h == 0)
        {
            if (s[j] == 'h')
            {
                h = 1;
                count++;
            }
        }
        if (e == 0 && h == 1)
        {
            if (s[j] == 'e')
            {
                e = 1;
                count++;
            }
        }
        if (d == 0 && e == 1)
        {
            if (s[j] == 'd')
            {
                d = 1;
                count++;
            }
        }
        if (i < 2 && d == 1)
        {
            if (s[j] == 'i')
            {
                i++;
                count++;
            }
        }
    }
    cout << i << endl
         << count << endl;
    if (count == 5 && s.size() > 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}