/*
The age of the 35 workers of a certain
company is given below as,
25 28 29 32 33 37 42 37 42 46 35 37 42 46 35 38 43 46 40 25 56 65 54 41 37 27 54 55 58 42 31 27 28 25 28
Construct a frequency distribution table
with appropriate class width and number of class.
*/

// try : max -  min
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()

{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif
    int n, H, L;
    cin >> n;
    int data_set[1000];
    int n_sort;

    for (int i = 0; i < n; i++)
    {
        cin >> data_set[i]; // input to dataset[] array
    }

    int N = sizeof(data_set) / sizeof(data_set[0]);
    sort(data_set, data_set + N);

    cout << "Higest :" << data_set[n] << endl
         << "Lowest :" << data_set[0] << endl;
    /*
    int data_range;
    data_range = (H - L) + 1;

    float k;
    int k_int;

    k = 1 + 3.322 * log(n);

    cout << "Float  K :" << k;
    k_int = k;
    cout << endl
         << "Int :" << k_int;

    int i_c_w;
    float f_c_w;
    f_c_w = data_range / k;+

    i_c_w = f_c_w;
*/

    return 0;
}