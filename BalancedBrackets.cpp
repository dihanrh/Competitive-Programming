#include <bits/stdc++.h>
#define FASTER ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std ;

/*
bool isValidPair(char open, char close)
{
	return((open == '(' and close == ')') or (open == '{' and close == '}') or (open == '[' and close == ']'));
}
*/
string solve ()
		{
				string s;
				cin >> s; 
				
				stack <char> opening ;
				unordered_map <char,char> validPair = {{')','('}, { '}','{' },{']','['}} ;
				for(int i = 0; i < s.length(); i++)
				{
					if(s[i] == '(' or s[i] == '{' or s[i] == '[')
					{
						opening.push(s[i]);
					}
					else
					{
						
						if(opening.empty() or opening.top() != validPair[s[i]] )
						{
							return "NO" ;
						}
						
					 	opening.pop();
					}
				}
				
				if(opening.empty())
				{
					return "YES" ;
				}
				else 
				{
					return "NO" ;
				}
		}


		
 void TestCase ()
		{
			 int t ; 
             cin >> t  ; 
             while ( t -- )
             {
             	cout << solve () << endl ;
            
             }
		}
		
		

int main ()
{   
	TestCase() ;
            
    return 0 ;
}