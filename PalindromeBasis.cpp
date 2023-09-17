//https://codeforces.com/contest/1673/problem/C
#include <bits/stdc++.h>
using namespace std ;

vector<int> palins ; 

int crbeatePalindrome( int input , int b, bool isOdd)
{
    int n =  input ; 
    int palin = input ; 

    if ( isOdd)
    {
        n /= b ;
    }

    while ( n > 0)
    {
        palin = palin * b + (n%b) ;
        n /=  b ;

        return palin ;
    }
}

void get_palindromes( int n )
{
    int number ;

    for (int j = 0 ; j < 2 ; j ++)
    {
        int i = 1 ;
        while ((number = crbeatePalindrome(i , 10 , j % 2))< n )
        {
            palins.push_back(number) ;
            i ++ ; 
        }
    }

    sort (palins.begin() , palins.end()) ;
    memset (dp , 0 ,sizeof(dp) ) ; 

    dp[0] = 1 ; 

    for ( int i = 0 ; i < palins.size()- 1 ; i ++)
    {
         dp[j]+=dp[j-palins[i]];
            dp[j]%=mod;
    }
    
}

long long int dp[((int) 1e5+5)+1] ;


int main ()
{   
            ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);

             int tc ; 
             cin >> tc  ; 
             while ( tc -- )
             {
                int n ; 
                cin >> n;

                cout << dp[n] << "\n" ; 


             }
    return 0 ;
}