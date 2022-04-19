#include<iostream>
using namespace std ;

int main ()
{  
    
    string n ,m ; 
    cin >> n >> m ;

    for (int i = 0 ; i < n.size() ; i ++)
    {
        if (n[i] != m[i]) cout<<"1" ;
        else cout <<"0" ;
    }
    


    return 0 ;
}