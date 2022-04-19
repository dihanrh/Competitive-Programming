#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    double amount;
    cin >> amount;
    int temp = amount * 100;

    int t, p;
    t = temp / 100;
    p = temp % 100;

    cout << "NOTAS:" << endl;
    int nota[] = {100, 50, 20, 10, 5, 2};

    for (int i = 0; i < 6; i++)
    {
        cout << t / nota[i] << " nota(s) de R$ " << nota[i] << ".00" << endl;
        t = t % nota[i];
    }

    cout << "MOEDAS:" << endl;
    p = t * 100 + p;
    int moeda[] = {100, 50, 25, 10, 5, 1};

    for (int i = 0; i < 6; i++)
    {
        cout << p / moeda[i] << " moeda(s) de R$ " << moeda[i] / 100.0 << endl;
        p = p % moeda[i];
    }
    cout << endl;

    return 0;
}