//Mars Exploration
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 
 SOSSOSSOSSOS
 SOSSPSSQSSOR
 
 SOSSPSSQSSOR
 SOSSSR
 ++++--
 0 1 2 3 4 5 6 7 8
 S O S S O S S O S
 0 1 2 0 1 2 0 1 2
 */

 int marsExploration(string s) {
   
   int signalCounter  = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        if((i % 3 == 0 or i %3  == 2) and s[i] != 'S')
        {
            signalCounter++;
        }
        if(i% 3 == 1 and s[i] != 'O')
        {
            signalCounter++;
        }
    }
    
   return signalCounter;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

  int result = marsExploration(s);

  

   fout << result << "\n";

    fout.close();

    return 0;
}
