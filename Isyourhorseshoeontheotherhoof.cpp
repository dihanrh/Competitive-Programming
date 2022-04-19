
#include <iostream>
using namespace std;

int hoof(int arr[], int n)
{
    int res = 1;

    for (int i = 1; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        if (i == j)
            res++;
    }
    return res;
}

int main()
{   int a , b , c , d ;
    cin >> a >> b >> c >> d ;
    int arr[] = {a , b, c ,d };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << 4 -  hoof(arr, n);
    return 0;
}
