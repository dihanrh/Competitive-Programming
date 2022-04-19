/*
#include <iostream>
#include<set>
#include<iterator>
using namespace std;

int main()
{   
    string s ; 
    getline(cin , s);
    set <char> a ;

    for ( int i = 0 ; i < s.length() ; i ++)
    {
        if (isalpha(s[i]) )
        {
            a.insert(s[i]) ;
        }
    }
    cout << a.size() ;
    
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<char> s;
    char c;
    while (c != '}')
    {
        cin >> c;
        if (c >= 'a' && c <= 'z')
            s.insert(c);
    }
    cout << s.size();
}
