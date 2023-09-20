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
		

	void printVec ( vector<int> v)
	{
		cout << "size :" << v.size() << endl ;
		
		vector<int> :: iterator it = v.begin() ;
		
		for (it = v.begin() ; it != v.end() ; it++)
		{
			cout << *it << " " ;
		}
		
	}
	
	void TestVector ()
	{
		 int N ;
     cin >> N ;
     
     vector<vector<int> > v ;
	
	for (int i = 0; i < N ;i ++)
	{
		int n ; 
		cin >> n ; 
		
		v.push_back(vector<int> ()) ;
		for (int j = 0; j < n ; j ++)
		{
			int x ;
			cin >> x ;
			v[i].push_back(x) ;
		}
		
	}
	
	  for(int i = 0; i < N ; i++)
	{
		 printVec(v[i]) ;
	}
	cout << endl ;
	
	vector<pair<int,int> > vp =  {{1,2},{3,4}} ;
	vector<pair<int,int> > :: iterator it ;
	
	for(it = vp.begin() ; it != vp.end(); it++)
	{
		cout << (it -> first) << " " << (it -> second) <<  endl ;
	}
		
	}
	
	
	void setTest0 ()
	{
		
    // tc O(log(n))
    // unordered_map : O(1)
    int n;
    cin >> n ;
    
    map<string,int> mp ;
    
    for(int i = 0; i < n; i++)
    {
    	string s; 
    	cin >> s;
    	
    	//mp.insert({s,i}) ;
    	
    	mp[s] = mp[s] + 1 ;
    }
    
    
     for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    // To show the frequency of s, we can use the following code:
    auto it = mp.find(s);
    if (it == mp.end()) {
      mp.insert({s, 1});
    } else {
      it->second++;
    }
  }
     
    
     for(auto i : mp)
    {
    	//cout << i.first << " "  << i.second << endl ;
    }
      

	}
		
		void setTest()
		{
			
	int  n ; 
	cin >> n ; 
	
	set <string> st  ;
	
	for(int i = 0; i < n; i++)
	{
		string s ; 
		cin >> s ; 
		st.insert(s) ;
		
		
	}
	
   set <string> :: iterator it ; 
   
   for ( it = st.begin() ; it != st.end() ; it++) // auto 
   {
   			cout << *it << endl ;
   }
   
  
		}
		
		void mapSet()
		{
			
		int N ; 
		cin >> N ;
		
		map<pair<string,string> , vector<int> > m ;
		
		for(int i = 0; i < N; i++)
		{
			string fn,ln ;
			int x ;
			cin >> fn >> ln >> x ;
			pair<string ,string> p = {fn,ln} ;
			vector<int> v ;
			for(int j = 0; j < x; j++)
			{
				int y ;
				cin >> y ; 
				v.push_back(y);
			}
			m[p] = v;
		}
		
		for ( auto pr : m)
		{
			cout << pr.first.first << " " << pr.first.second << endl ;
			
			auto list  = pr.second ;
			for(auto el :pr.second  )
			{
				cout << el << " " ;
			} cout << endl;
		}

		}

int main ()
{   
	stack<int> st ; 
	
	st.push(5) ;
	st.push(8) ;
	st.push(2) ;
	st.push(7) ;
	
	while(!st.empty() )
	{
		cout << st.top() << endl ; 
		st.pop() ;
	}
            
    return 0 ;
}