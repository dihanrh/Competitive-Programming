#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;

    cin >> n >> s;

    int count_a = 0, count_d = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            count_a++;
        else
            count_d++;
    }
    if (count_a > count_d)
        cout << "Anton";
    else if (count_a == count_d)
        cout << "Friendship";
    else
        cout << "Danik";

    return 0;
}
