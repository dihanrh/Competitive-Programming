//https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE

#include <bits/stdc++.h>
#define FASTER ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std ;


 void TestCase ()
		{
			 int t ; 
             cin >> t  ; 
             while ( t -- )
             {
             	
            
             }
		}
		
	void solve()
	{
		int N ; 
		cin >> N; 
		
		map<int,vector<string> > list ;
		
		for(int i = 0; i < N; i++)
		{
			int marks ;
			string name ;
			cin >> name >> marks ;
			
			list[marks].push_back(name) ;
		}
		
		for(auto it = list.rbegin(); it != list.rend(); it++)
		{
			sort(it->second.begin() , it->second.end()) ;
			
			for(auto name : it -> second)
			{
				cout << name << " " << it -> first << endl ;
			}
		}
		
				
	}
	
	void solve2()
	{
		int N ; 
		cin >> N; 
		
		map<int,multiset<string> > list ;
		
		for(int i = 0; i < N; i++)
		{
			int marks ;
			string name ;
			cin >> name >> marks ;
			
			list[marks].insert(name) ;
		}
		
		for(auto it = list.rbegin(); it != list.rend(); it++)
		{
			//sort(it->second.begin() , it->second.end()) ;
			
			for(auto name : it -> second)
			{
				cout << name << " " << it -> first << endl ;
			}
		}
		
				
	}
	



int main ()
{   
		solve2() ;
		


            
    return 0 ;
}