#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, e = 0, o = 0;
        cin >> n;

        // int ev[n]={0} , od [n] = {0} ;

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> m;
            if (m % 2 == 0)
            {
                //  ev[i] = m ;
                e++;
            }
            else
            {
                // od[i] = m ;
                o++;
            }
        }
        if (e == o && e == n)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}