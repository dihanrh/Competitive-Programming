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

    long long t;
    cin >> t;

    while (t--)
    {

        string str;
        cin >> str;

        int x = -1, tmp, idx , si_tmp , si1_tmp ;

        for (int i = 0; i < str.size(); i++)
        {
            tmp = ((str[i] - '0') + (str[i + 1] - '0'));
            si_tmp = tmp ;
            si1_tmp = (tmp * 10) + (str[i] - '0') ;
            cout << "si1 :" <<  si1_tmp << endl ; 
            
            if (tmp > x)
            {
                x = tmp;
                idx = i;
            }
        }
        for (int i = 0; i < str.size(); i++)
        {
            if (i == idx)
            {
                cout << x;
                i++;
            }

            else
            {
                cout << str[i];
            }
        }

        cout << endl;
    }

    return 0;
}