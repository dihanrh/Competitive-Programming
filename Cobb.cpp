#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        long long n,sum=0,temp;cin>>n;
        long long ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }

        for(int i=0;i<n-1;i++)
        {
            sum= max(sum,(ar[i]*ar[i+1]));
        }
        cout<<sum<<endl;
    }
    return 0;
}