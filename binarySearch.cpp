#include <bits/stdc++.h>
using namespace std;
        // binary search 
        // self attemp

        int main(){
            ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
           
            int n ; 
            cin >> n ;

            int ar[n] ;

            for( int i = 0 ; i < n ; i ++)
            {
                cin >> ar[i] ;
            }

            int key ;
            cin >> key ;

            sort (ar , ar+n) ;

            int mid ;
            int left = 0 ;
            int right = n ;
            int i = 0  ; 

            while ( true )
            {
                mid = (left + right ) /  2 ;
                if ( ar[mid] == key)
                {
                    cout <<"Key : " << ar[mid] <<" "<<  mid <<  "\n" ;
                    break ; 
                }
                if ( ar[mid] > key)
                {
                     right = mid ; 
                     mid = ( left + right) / 2 ;
                     
                }
                else 
                {   
                    left = mid ;
                    mid = (left + right ) / 2 ;


                }

                if ( left > right )
                {
                    cout <<"Key does not exist!" << "\n" ;
                    break ; 
                }
                
            }

            cout << endl << i ; 


            
            return 0;
        }