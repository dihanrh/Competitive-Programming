#include <iostream>
using namespace std;

int main()
{
    string s;
    int upr = 0, lwr = 0;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') 
        {
            upr++;
        }
        if (s[i] >= 'a' && s[i] <= 'z')

        {
            lwr++;
        }
    }

    if (upr > lwr)
    {

        for (int i = 0; i < s.size(); i++)
        {
            putchar(toupper(s[i]));
        }
    }

    else if (lwr >= upr)
    {
        for (int i = 0; i < s.size(); i++)
        {
            putchar(tolower(s[i]));
        }
    }
        return 0;
    }