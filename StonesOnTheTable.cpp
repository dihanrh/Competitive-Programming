#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    string s;
    cin >> n;
    cin >> s;

    for (int i = 0, j = i + 1; i < n; i++ , j ++)
    {

        if (s[i] == s[j])
        {
            count++;
        }
       // cout << endl << s[i] <<" " << s[j];
    }

   cout << count ;

    return 0;
}