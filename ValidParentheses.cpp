<<<<<<< HEAD
//https://leetcode.com/problems/valid-parentheses/
#include<bits/stdc++.h>
using namespace std ; 

int main () 
{
  string s ; 
  cin  >> s ;
  
  stack <char> stk ;
  
  for( int i = 0 ; i < s.size() ; i ++)
  {
  	if (s[i] == '(' or s[i]== '{' or s[i] == '[')
  	{
  		stk.push(s[i]) ;
  	}
  	 
  		 if (s[i] == ')' )
  		{
  			if (!stk.empty() and stk.top() == '(')
  			{
  				stk.pop() ;
  			}
  			else {
  				stk.push(s[i]) ;
  				break ;
  			}
  		}
  		 if (s[i] == '}' )
  		{
  			if (!stk.empty() and stk.top() == '{')
  			{
  				stk.pop() ;
  			}
  			else {
  				stk.push(s[i]) ;
  				break ;
  			}
  		}
  		
  		 if (s[i] == ']' )
  		{
  			if (!stk.empty() and stk.top() == '[')
  			{
  				stk.pop() ;
  			}
  			else {
  				stk.push(s[i]) ;
  				break ;
  			}
  		}
  		
  	
  }
  
  
  
	if (stk.empty())
	{
		cout << "emp" ;
	}
	else 
	{
		cout << "nt emp" ;
	}
	return 0  ; 
=======
//https://leetcode.com/problems/valid-parentheses/
#include<bits/stdc++.h>
using namespace std ; 

int main () 
{
  string s ; 
  cin  >> s ;
  
  stack <char> stk ;
  
  for( int i = 0 ; i < s.size() ; i ++)
  {
  	if (s[i] == '(' or s[i]== '{' or s[i] == '[')
  	{
  		stk.push(s[i]) ;
  	}
  	 
  		 if (s[i] == ')' )
  		{
  			if (!stk.empty() and stk.top() == '(')
  			{
  				stk.pop() ;
  			}
  			else {
  				stk.push(s[i]) ;
  				break ;
  			}
  		}
  		 if (s[i] == '}' )
  		{
  			if (!stk.empty() and stk.top() == '{')
  			{
  				stk.pop() ;
  			}
  			else {
  				stk.push(s[i]) ;
  				break ;
  			}
  		}
  		
  		 if (s[i] == ']' )
  		{
  			if (!stk.empty() and stk.top() == '[')
  			{
  				stk.pop() ;
  			}
  			else {
  				stk.push(s[i]) ;
  				break ;
  			}
  		}
  		
  	
  }
  
  
  
	if (stk.empty())
	{
		cout << "emp" ;
	}
	else 
	{
		cout << "nt emp" ;
	}
	return 0  ; 
>>>>>>> 53bf326056844c09ff21c2135df222a20e3c225f
}