#include <iostream>
using namespace std;

int main()
{
    long int n, x, y;
    cin >> n;
    /*
    if (n % 2 == 0)
    {
        x = n / 2;
        y = n / 2;

        cout << x << " " << y << endl;
    } 
    else 
    { 
        int flag = 0;
        for (int i = 2; i <= (n / 2) + 1; i++)
        {
            if ((n / 2) % i == 0 || ((n / 2) + 1) % i == 0)
            {
                flag++;
            }
        }

        if (flag > 0)
        {
            x = (n / 3) + 3;
            y = n - x;

            cout << x << " " << y << endl;
        }
        else
        {
            x = n / 2;
            y = (n / 2) + 1;

            cout << x << " " << y << endl;
        }
    

       
    }  */

    if (n % 2 == 0)
    {
        x = n - 4;
        y = n - x;
        cout << x << " " << y << endl;
    }
    else 
    {
        x = n - 9;
        y = n - x;
        cout << x << " " << y << endl;
    }

    return 0;
}