

#include <iostream>
using namespace std;
int n, a, x, y = 100, b, c, ans;
main()
{   
    //4
    //33 44 11 22
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a; //33 //44 // 11 // 22
        if (a > x) 
            x = a, b = i; // x =33 b= 0 
        if (a <= y) 
            y = a, c = i;  // y =  22 , c = 3
    }
    ans = b + n - c - 1 - (c < b); // 0 + 4 - 3 - 1 
    cout << ans;
}