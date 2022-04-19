#include <iostream>
using namespace std;

int main()
{

    string s;
    int i, j;

    cin >> s;

    for (int i = 0; i < s.size(); i += 2)
    {

        for (int j = 0; j < s.size() - 1; j += 2)
        {
            if (s[j] > s[j + 2])
            {

                int temp = 0  ;
                s[temp]= s[j];
                s[j]=s[j+2];
                s[j+2]=s[temp];
            }
        }
    }
    cout << s;

    return 0;
}