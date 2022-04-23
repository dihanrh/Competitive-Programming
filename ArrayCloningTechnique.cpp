//https://codeforces.com/contest/1665/problem/B
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

                 int n;
        cin>>n;
        int ar[n];
        map<int,int>mp;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            mp[ar[i]]++;
            mx=max(mx,mp[ar[i]]);
        }
        int cnt=mx;
        int ans = 0;
        
        while(cnt<n)
        {
            ans++;
            int x = n-cnt;
            if(x>cnt)
            {
                ans+=cnt;
                cnt+=cnt;
            }
            else
            {
                ans+=x;
                cnt+=x;
            }
        }
        cout<<ans<<endl;

             }
    return 0 ;
}