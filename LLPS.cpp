#include <bits/stdc++.h>
using namespace std ;

int main ()
{	
	string s ;
	string ans ;
	cin >> s ;

	char a = 'a' ;

	for ( int i = 0 ; i < s.size() ; i ++)
	{
		if ( s[i] > a ) a = s[i] ;
	}
	
	for( int i = 0 ; i < s.size() ; i ++)
	{
		if ( s[i] == a ) ans += s[i] ;
	}

	cout << ans  << endl ;
	
	return 0 ;
}