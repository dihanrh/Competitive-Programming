// https://www.hackerrank.com/contests/second/challenges/next-greater-element/problem
#include <bits/stdc++.h>
using namespace std ;
#define FASTER ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void solve ()
		{
				int n;
				cin >> n;
				int ar[n] ;
				
				for(int i = 0; i < n; i++)
				{
					cin >> ar[i] ;
				}
				
				for ( int i = 0; i < n; i++)
				{
					for(int j = i; j < n; j++)
					{
						if(ar[j] > ar[i])
						{
							cout << ar[i] << " " << ar[j] << endl ;
							break;
						}
						else 
						{
							if(j+1 == n)
							{
								cout << ar[i] << " " << -1 << endl;
							}
						}
					}
				}
		}
		
		void solve2()
		{
			int n;
			cin >> n;
			int a[n] ;
			for(int i = 0; i < n; i++)
			{
				cin >> a[i];
			}
			stack <int> noNextGrater ;
			vector<int> result(n, -1);
			
			for(int i = 0; i < n; i++)
			{
				while(!noNextGrater.empty() and a[i] > a[noNextGrater.top()] )
				{
					result[noNextGrater.top()] = a[i];
					noNextGrater.pop();
				}
				noNextGrater.push(i);
			}
			
			for(int i = 0; i < n; i++)
			{
				cout << a[i] << " " << result[i] << "\n" ;
			}
		}
		
		



		
		

int main ()
{   
	solve2 () ;
            
    return 0 ;
}