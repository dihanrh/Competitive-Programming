#include <iostream>
using namespace std;

int main()
{
  int t, x = 0;
  string s;

  cin >> t;
  while (t--)
  {
    cin >> s;

    if (s == "++X")
      ++x;
    else if (s == "X++")
      x++;
    else if (s == "--X")
      --x;
    else if (s == "X--")
      x--;
  }
  cout << x << endl ;

  return 0;
}