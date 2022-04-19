/*
vector : push_back , map .
prb : u will be given n number and u have to find
the sum of odd number index.
task : a vector and pair 3 value in it 
*/
// C++ program to demonstrate use of foreach

#include <iostream>
#include <vector>
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

    vector<int> v(5, 2);

    v.insert(v.begin(), 2, 7);

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    v.erase(v.begin() + 1, v.begin() + 3);

    for (int x : v)
    {
        cout << x << " ";
    }

    cout << endl;
    for (int x : v)
    {
        cout << x << " ";
    }

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }

    return 0;
}