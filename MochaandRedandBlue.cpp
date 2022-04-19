#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int sum = 0;

        if (s[0] == '?')
        {
            int i = 0;

            while (s[i] == '?')
            {
                sum++;
                i++;
            }
        }
        
        if (sum == n)
        {
            s[0] = 'R' ;
        }
        if (sum % 2 == 0)
        {
            if ( sum ==  n )  
            {
                s[0] == 'R' ;
            }
            else 
            {
                s[0] = s[sum];
            }
            for (int i = 1; i < sum; i++)
            {
                if (s[i - 1] == 'B')
                {
                    s[i] = 'R';
                }
                else
                {
                    s[i] = 'B';
                }
            }
        }
        else
        {
            if (s[sum] == 'B')
            {
                s[0] = 'R';
            }
            else if ( s[sum] == 'R')
            {
                s[0] = 'B';
            }
            for (int i = 1; i < sum; i++)
            {
                if (s[i - 1] == 'B')
                {
                    s[i] = 'R';
                }
                else if ( s[i-1] == 'R')
                {
                    s[i] = 'B';
                }
            }
        }
        
        for (int i = sum ; i <= n; i++)
        {
        if ( s[i] == '?')
            {
                if(s[i-1] == 'B' )
                {
                    s[i] = 'R' ;
                }
                else 
                {
                    s[i] = 'B' ;
                }
            }
        }  
        cout << s << endl;
    }

    return 0;
}