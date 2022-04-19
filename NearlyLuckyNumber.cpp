
#include <iostream>
using namespace std;
long long n, count  ;
int main()
{
    cin >> n;
    while (n > 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
            count ++;
        n = n / 10;
    }
    if (count  == 4 || count  == 7)
        cout << "YES";
    else
        cout << "NO";
}