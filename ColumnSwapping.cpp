//https://codeforces.com/contest/1684/problem/C
#include <bits/stdc++.h>
using namespace std ;
   void solve()
   {
      int n, m ; 
                cin >> n >> m ;

                vector<vector<int> >v(n,vector<int>(m));
                vector<vector<int> >vSorted(n,vector<int>(m));

               for(int i  = 0 ; i < n; i ++)
               {
                  for(int j = 0 ; j < m; j++ )
                  {
                     cin >> v[i][j] ;
                     vSorted [i][j] = v[i][j] ;

                  }
               }

                for(int i=0;i<n;i++)
                {
                  sort(vSorted[i].begin(),vSorted[i].end());
                }

                vector<int> nG ;

                for( int i = 0 ; i < n; i++)
                {
                  for(int j = 0; j < m ; j ++)
                  {
                     if(v[i][j] != vSorted[i][j])
                     {
                        nG.push_back(j) ;
                     }
                  }
                  if(nG.size() >= 2 )
                  {
                     break ;
                  }
                }

                if(nG.size() == 0)
                {
                  cout << 1 << " " << 1 << "\n" ;
                }
                else if(nG.size() != 2 )
                {
                  cout << -1 << "\n" ;
                }        
                else
                {
                  for( int i = 0 ; i < n ; i++)
                  {
                     swap(v[i][nG[0]] , v[i][nG[1]]) ;
                  }

                  for(int i = 0 ; i < n ; i ++)
                  {
                     for( int j = 0 ; j < m ; j ++)
                     {
                        if(v[i][j] != vSorted[i][j])
                        {
                           cout <<-1 <<"\n" ;
                           return ;
                        }

                        
                     }
                  }
                  cout<< nG[0]+1 <<" " <<nG[1]+1 << "\n" ;
                }
   }
int main ()
{   
            ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);

             int tc ; 
             cin >> tc  ; 
             while ( tc -- )
             {
               solve() ; 
             }
    return 0 ;
}