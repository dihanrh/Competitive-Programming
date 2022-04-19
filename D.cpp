#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;

// short name
#define f first
#define s second
#define pb push_back
#define mp make_pair

// form
#define fl(i, a, b) for (int i = a; i <= b; i++)

int32_t main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);
/*
#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif
*/
    // fl(i, 1, 10 )
    // {
    //
    // }

    int a, b, c, aa, bb;
    cin >> aa >> bb;

    a = bb;
    b = a;
    c = b;
    int tmp = 0;
    int count = 0;
    while (true)
    {
        if (a >= aa and b >= aa and c >= aa)
            break;
        if (a > b)
            swap(a, b);

        if (a > b + c)
            a--;
        if (b > c)
            swap(b, c);
        a = b + c - 1 ;
        count++;
    }
    cout << count  << "\n";
    return 0;
}