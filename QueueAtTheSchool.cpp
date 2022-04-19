#include <iostream>
using namespace std;

int main()
{
    int n, t;
    string s;
    
    cin >> n >> t >> s;

    while (t--)
    {
        for (int i = 1; i < n; i++)
        {
            if (s[i-1] == 'B' && s[i] == 'G')
            {
                swap(s[i] , s[i-1]) ;
               
               // s[i -1] = 'G' ;
                // s[i] =  'B' ;
                i ++ ;
            } 
        }
    }
 cout << s ;
    return 0;
}