#include <iostream>
using namespace std;

int main()
{
    float nF;
    cin >> nF;
    int nI = static_cast<int>(nF);
    int n, n100, n50, n20, n10, n5, n2, n1, temp, n05, n025, n010, n005, n001, tempF;
    int nn = (nF - nI) * 1000;
    if (nn % 10 >= 5)
        nn = (nn / 10) + 1;

    n100 = nI / 100;
    temp = nI % 100;
    n50 = temp / 50;
    temp = temp % 50;
    n20 = temp / 20;
    temp = temp % 20;
    n10 = temp / 10;
    temp = temp % 10;
    n5 = temp / 5;
    temp = temp % 5;
    n2 = temp / 2;
    temp = temp % 2;
    n1 = temp;
    n05 = nn / 50;
    tempF = nn % 50;
    n025 = tempF / 25;
    tempF = tempF % 25;
    n010 = tempF / 10;
    tempF = tempF % 10;
    n005 = tempF / 5;
    n001 = tempF % 5;

    cout << "NOTA :" << endl
         << n100 << " nota(s) de R$ 100.00" << endl
         << n50 << " nota(s) de R$ 50.00" << endl
         << n20 << " nota(s) de R$ 20.00" << endl
         << n10 << " nota(s) de R$ 10.00" << endl
         << n5 << " nota(s) de R$ 5.00" << endl
         << n2 << " nota(s) de R$ 2.00" << endl
         << "MOEDAS :" << endl
         << n1 << " moeda(s) de R$ 1.00" << endl
         << n05 << " moeda(s) de R$ 0.50" << endl
         << n025 << " moeda(s) de R$ 0.25" << endl
         << n010 << " moeda(s) de R$ 0.10" << endl
         << n005 << " moeda(s) de R$ 0.05" << endl
         << n001 << " moeda(s) de R$ 0.01" << endl
         << endl;

    return 0;
}