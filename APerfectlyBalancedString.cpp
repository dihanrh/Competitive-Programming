//https://codeforces.com/contest/1673/problem/B
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
                string s , s2 ;
                cin >> s ; 
                int n = s.size() ;
                s2 = s ; 

                sort ( s2.begin () , s2.end()) ;

                if ( s2[0] == s2[n-1])
                {
                    cout << "YES" << "\n" ;
                    continue ;
                }

                set <char> ss ; 
                int mg =  INT_MAX ; 
                map<char,int>lt;

                for(char c='a';c<='z';c++)
                {
                    lt[c]=-1;
                }
                for ( int i = 0 ; i < n ; i ++)
                {
                    if(lt[s[i]]==-1)
                    {
                        lt[s[i]]=i;
                    }
                    else
                    {
                        mg=min(mg,i-lt[s[i]]-1);
                        lt[s[i]]=i;
                    }

                    ss.insert(s[i]) ;
                }

                int cs=ss.size();
                (mg<n and mg+1<cs)?cout <<"NO" << "\n" :cout <<"YES" << "\n" ;







                
             }
    return 0 ;
}