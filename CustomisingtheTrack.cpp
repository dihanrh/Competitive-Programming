#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        long long int sum = 0, a;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> a; // 1 2 3
            sum += a; // sum =  6
        }
        // cout << sum << endl ;
        /*
2 2 2 
*/
        long long int rim, ans;
        rim = sum % n; // 6 % 3 == 0 ;
                       //  cout << rim << endl ;

        ans = (n - rim) * rim; // (3-0)*0

        cout << ans << endl;
    }

    return 0;
}