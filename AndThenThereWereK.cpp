#include <iostream>
using namespace std;

int main()
{

    int t ;

    cin >> t;
    while (t--)
    {  long long  int n , m  ;
       // int  k ,a ;
        cin >> n;
         m = 1 ;
/*
        while (true)
        {
            m = (n - i);
            k = (n - (i + 1));
            a = (m & k);
            i++;
            if (a == 0)
            {
                cout  << k << endl  ;
                break ;
            }
        }
       */

while (m<=n)
{
    m *= 2 ;
    
}

m /= 2 ;
m -- ;

cout << m << endl  ;


    }

    return 0;
}