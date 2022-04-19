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

    int t;
    cin >> t;

    while (t--)
    {
        int a = 0;
        long long int x, y;
        cin >> x >> y;
        long long int maxx = max(x, y);
        long long int minn = min(x, y);

        if (maxx == minn)
            cout << 0 << endl;
        else
        {

            while (minn < maxx)
            {
                a++;
                  if (maxx % 8 == 0 && maxx / 8 >= minn)
                {
                    maxx /= 8;
                }
                else if (maxx % 4 == 0 && minn <= maxx / 4)
                {
                    maxx /= 4;
                }
                else if (maxx % 2 == 0 && minn <= maxx / 2)
                {
                    maxx /= 2;
                }
                else
                {
                    break;
                }  
            }   
            /*
            if (maxx == minn)
            {
                cout << a << endl;
            }
            else
                {
                    cout << -1 << endl;
                }
                */

              
        }cout << a  << endl ;
    }
 
    return 0;
}