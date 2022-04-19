#include <bits/stdc++.h>
using namespace std;
        
        class cars
        {
            private :
            string cm_n ;
            string m_n ;
            string f_t ;
            float mil ;
            double pr ;

            public : 

            void setData(string cn , string mn, string ft, float m , double p)
            {
                cm_n = cn ;
                m_n  = mn ;
                f_t = ft ; 
                mil = m ; 
                pr = p ;
            }

            void displayData ()
            {
                cout  << "\n" ;
                cout <<"Comp Name :" << cm_n << "\n"  ;
                cout <<"Mod :" << m_n << "\n" ;
                cout <<"Fuel :"<<f_t <<"\n" ;
                cout <<"Mil :" << mil  << "\n" ;
                cout <<"Prc :"<< pr << "\n" ;
            }

        };
 
        int main()
        {
            ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
           
            cars car1 ; 

            car1.setData("TATA" , "T202" , "Dis" , 15.00 , 5.225 ) ;
            car1.displayData() ;

            return 0;
        }