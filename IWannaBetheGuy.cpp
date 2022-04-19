/*
#include<iostream>
using namespace std ;

int main()
{
    int n , lv;
    cin >> n ;

    int xy[n + 1] = {0} ;
    int nx ;
    cin >> nx ;
    for (int i = 1 ; i <= nx ; i ++)
    {
        cin >> lv ;
        xy[lv] = 1 ;
    }
    int ny ;
    cin >> ny ;
    for (int i = 1 ; i <= ny ; i++)
    {
        cin >> lv ;
        xy[lv] = 1 ;
    }

    for ( int i = 1 ; i <= n ; i ++)
    {
        if ( xy[i] == 0 )
        {
            cout <<"Oh, my keyboard!" ;
            return 0 ;
        }
    }
    cout << "I become the guy." ;

    return 0 ;
}
*/

#include <bits/stdc++.h>
using namespace std;
int n, _size, input;
set<int> ans;
main()
{
    cin >> n;
    for (int i = 2; i--;)
        for (cin >> _size; _size--;)
            cin >> input, ans.insert(input);
    cout << (n == ans.size() ? "I become the guy.\n" : "Oh, my keyboard!\n");
}