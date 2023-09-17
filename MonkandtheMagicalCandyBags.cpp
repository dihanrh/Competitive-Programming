
//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/?fbclid=IwAR2kDiVkEaxu9dkCTCUhzXLuIccNn0Gz3dSfkaSUjlDE6Nb9UHMzt8HNDo4
#include <bits/stdc++.h>
#define FASTER ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std ;



		
 void solve()
 {
 	int numBag , time ;
 	cin >> numBag >> time ;
 	
 	multiset <long long int> bag ;
 	
 	for(int i = 0; i < numBag ;i++)
 	{
 		long long int candies ;
 		cin >> candies ;
 		bag.insert(candies) ;
 	}
 	
	long long int maxConsume = 0 ;
	multiset<long long int> :: iterator posMaxCandies ;
	
	while(time --)
	{
	    posMaxCandies = bag.end() ;
	    posMaxCandies -- ;
		long long int lastBag = *posMaxCandies ;
		maxConsume += lastBag ;
		bag.erase(posMaxCandies) ;
		bag.insert(lastBag/2) ;
	}
	
	cout << maxConsume << endl ;

 }
	


 void TestCase ()
		{
			 int t ; 
             cin >> t  ; 
             while ( t -- )
             {
             	solve () ;
            
             }
		}
	

	

int main ()
{   

		
         TestCase () ;   
            
	
            
    return 0 ;
}