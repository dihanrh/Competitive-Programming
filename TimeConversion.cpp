#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    
    int n = s.size() ;
    
    if(s[n-2] == 'A')
    {
        if(s[0] == '1' and s[1] == '2')
        {
            s[0] = '0';
            s[1] = '0';
        }
        
        s.erase(s.begin()+8, s.end()) ;
    }
    else 
    {
        if(!(s[0] == '1' and s[1] == '2'))
        {
        int zeroPlace = s[0] - '0';
        int firstPlace = s[1] - '0';
        
        int hourSum = ((zeroPlace*10)+firstPlace)+ 12;
        s[0] = (hourSum / 10) + '0';
        s[1] = (hourSum % 10) + '0';
        }
        
         s.erase(s.begin()+8, s.end()) ;
    }
    
    return s;
    
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
