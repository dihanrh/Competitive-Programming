#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif

    string n;
    cin >> n;

    long long tmp, pos = 2, po = 1, check_digit, mp = 0, sum = 0;

    int ns = n.size();
    for (int i = 0; i < ns; i++)
    {

        if (i % 2 == 0)
        {
            cout << "Position " << pos << " Multi :" << (n[i] - '0') * pos << "\n";
            mp += (n[i] - '0') * pos;

            if (n[i] - '0' >= 5)
            {
                 sum++;
                
            }
        }
        else
        {
            cout << "Position " << po << " Multi :" << (n[i] - '0') * po << "\n";
            mp += (n[i] - '0') * po;
        }
    }

    mp += sum;
    check_digit = 10 - (mp % 10);
    cout << "Check Digit : " << check_digit << "\n";
    cout << "Number " << n << check_digit << "\n";

    return 0;
}