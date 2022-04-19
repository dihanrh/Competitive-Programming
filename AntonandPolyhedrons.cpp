/*
Tetrahedron. Tetrahedron has 4 triangular faces.
Cube. Cube has 6 square faces.
Octahedron. Octahedron has 8 triangular faces.
Dodecahedron. Dodecahedron has 12 pentagonal faces.
Icosahedron. Icosahedron has 20 triangular faces.
#define Tetrahedron 4
#define Cube 6
#define Octahedron 8
#define Dodecahedron 12
#define Icosahedron 20

*/
/*
#include<iostream>
using namespace std ;

int main ()
{
    int n , ans = 0  ;
    cin >> n ;
    string s ;
    
    while (n --)
    {
        cin >> s ;
        if ( s == "Tetrahedron" ) ans += 4 ;
        else if (s == "Cube") ans += 6 ;
        else if (s == "Octahedron") ans += 8 ;
        else if (s == "Dodecahedron") ans += 12 ;
        else if (s == "Icosahedron") ans += 20 ;
        
    }

    cout << ans ;
    return 0 ;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int n, k = 0;
    for (cin >> n; n--; k += (a[0] == 'T' ? 4 : a[0] == 'C' ? 6
                                            : a[0] == 'O'   ? 8
                                            : a[0] == 'D'   ? 12
                                                            : 20))
    {
        cin >> a;
    }
    cout << k;
}
