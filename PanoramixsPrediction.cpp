#include <iostream>
using namespace std;

int main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif

    
    int f_p = 1;
    int f_m = 1 ;
    int n, m;
    cin >> n >> m;

    for (int i = n + 1; i <= m; i++)
    {  // cout << "i : " << i << endl ;
        f_p = 1 ; 
        for (int j = 2; j < i; j++)
        {  // cout << "j : " << j << endl ;
            if (i % j == 0)
            {
                f_p = 0;
            }
        }
        if (f_p == 1 &&  i < m )
        {
            cout << "NO" << endl ;
            return 0 ;
        }
        
        else if (f_p == 1 && i == m)
        {
            cout << "YES" << endl;
        }
    }
    if (f_p == 0)
    {
        cout << "NO" << endl;
    }

    return 0;
}