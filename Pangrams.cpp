//Pangrams
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    

   
    //string status = "pangram";
    
    map<char,int> checker; 
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != ' ')
        {
            checker[tolower(s[i])] ++;
        }
    }
    
    return (checker.size() == 26 ? "pangram" : "not pangram");

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

   string result = pangrams(s);


    fout << result << "\n";

    fout.close();

    return 0;
}
