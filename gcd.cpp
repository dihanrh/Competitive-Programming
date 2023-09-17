#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (true)
    {
        int rim = (a % b);
        if (rim == 0)
        {   
            cout << "rim = 0 " << endl ;cout << " r  b : " << b << endl ;
            return b;
            
        }
        a = b; cout << "a : " <<  a  << endl ;
        b = rim; cout << "b : " << b << endl ;
    }
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(0);
    cout.tie(0);


    int a, b;
    cin >> a >> b;

   /* int temp;
    if (b > a)
    {
        temp = a;
        a = b;
        b = temp;
    }*/
    cout << gcd(a, b) << endl;
    return 0;
}