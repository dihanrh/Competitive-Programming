
#include <iostream>
using namespace std;

int search(int ar[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {

        if (ar[i] == x)
        {
            return i;
        }

     //   return -1;
    }
}

int main(void)
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif

    int ar[] = {10, 151, 200, 520, 5, 9, 225};
    int n = sizeof(ar) / sizeof(ar[0]);
    int x = 520;

    int result = search(ar, n, x);

    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;

    return 0;
}