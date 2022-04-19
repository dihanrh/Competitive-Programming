#include <bits/stdc++.h>
using namespace std;

bool is_true(int dis , vector<int>v , int nc)
{
    int total_cow = 1; 
    int last_pos = v[0] ;

    for(int i = 1 ; i < v.size() ; i ++)
    {
        if(v[i] - last_pos >= dis )
        total_cow ++ ;
        last_pos = v[i] ;

        if (total_cow == nc )
        {
            return true ;
        }
    }
    return false ;

}

int binary_search(int size , vector<int> v, int nc)
{
    int ans = 0 ;
    int high = size ;
    int low = 1 ;
    int mid ;
    while (high >= low)
    {
        mid =low + (high-low) / 2; 
        if (is_true(mid , v ,nc ))
        {
            low = mid + 1 ;
            ans = mid ;
        }
        else 
        {
            high =  mid - 1 ;
        }
    }
    return ans ;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        long long int nc, md;
        cin >> nc >> md;

        vector<int> v;
        int input ;
        for ( int i = 0 ; i < nc ; i ++)
        {   
            cin >> input ;
             v.push_back(input) ;
        }
        
        /*
        for ( auto i = v.begin() ; i != v.end() ; ++i )
        {
            cout << *i  << " " ;
        }
        */ 

       is_true () ;
       binary_search () ;


       cout << binary_search() ;


    }

    return 0;
}
