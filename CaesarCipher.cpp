#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("inputFile.txt", "r", stdin);
    freopen("outputFile.txt", "w", stdout);
#endif

        string s;
        cin >> s;
        int ns;
        ns = s.size();
    
        int ar[ns], en[ns], tmp;
        char ae[ns];

        char rs[25] = {0};
        int nv = 65;
        for (int i = 0; i <= 25; i++)
        {
            rs[i] = char(nv);
            nv++;
        }
        for (int i = 0; i < ns; i++)
        {
            ar[i] = int(s[i]) - 65;

            for (int j = 0; j <= 25; j++)
            {
                if (ar[i] == j)
                {
                    tmp = j;
                    tmp = (tmp + 3) % 26;
                    if (tmp < 0)
                    {
                        tmp += 26;
                    }
                    ae[i] = rs[tmp];
                }
            }
            cout << ae[i];
        }

    // string s ;
    // cin >> s ; 
    // int tmp;

    // for (int i = 0; i < s.size(); i++)
    // {
    //     tmp = int(s[i]) + 3;
    //     if (tmp > 87 && tmp < 93)
    //     {
    //         tmp = (tmp - 88) + 65 - 3;
    //     }
    //     else if ( tmp > 93 && tmp < 126)
    //     {
    //         tmp = (tmp - 120) + 97 - 3 ;
    //     }
    //     cout << char(tmp);
    // }
     
     


    return 0;
}