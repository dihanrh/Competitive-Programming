/// https://codeforces.com/contest/1675/problem/B
#include <bits/stdc++.h>
using namespace std ;
 
int main ()
{   
            ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
 
             int tc ; 
             cin >> tc  ; 
             while ( tc -- )
             {
            
                int ans=0;
 
		int n;
 
		cin>>n;
 
		int a[n];
 
		for (int i = 0; i < n; ++i){
 
			cin >> a[i];
 
		}
 
		for (int i = n-2; i>=0; i--){
 
			if(a[i+1]==0){
 
				ans=-1;
 
				break;
 
			}
 
			while(a[i]>=a[i+1]){
 
				a[i]/=2;
 
				ans++;
 
			}
 
		}
 
		cout << ans << endl;
 
 
            }
    return 0 ;
}