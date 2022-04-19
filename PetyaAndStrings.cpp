#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    string s1, s2;
    cin >> s1 >> s2;
    
    

    for (int i = 0; i <= s1.size(); i++)
    {
        if (tolower(s1[i]) == tolower(s2[i]))
        {
            x++;

            if (x == s1.size())
                cout << "0" << endl;
        }
        else if (tolower(s1[i]) < tolower(s2[i]))
        {
            cout << "-1" << endl;

            break;
        }
        else if (tolower(s1[i]) > tolower(s2[i]))
        {
            cout << "1" << endl;

            break;
        }
    }

    return 0;
}