#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int count = 0 ;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int l = a[1], h = a[1];
    for (int i = 2; i <= n; i++)
    {
        if (a[i] < l)
        {
            l = a[i];
            count ++ ;
        }
        if (a[i] > h)
        {
            h = a[i];
            count ++ ;
        }
    }
cout << count ;
    return 0;
}