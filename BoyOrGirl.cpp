#include <iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    string s;
    int count = 0;
    cin >> s;
    sort (s.begin() , s.end());

   
    
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            if (s[i] == s[j])
            {
                count++;
                break ;
            }
        }
    }
   
 
    if ((s.size() - count) % 2 != 0)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
 
    return 0;
}