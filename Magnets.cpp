/* #include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int m[n];

    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
        if (m[i] != m[i + 1])
            count++;
    }

    for (int i = 0; i < n; i++)
    {
        if (m[i] != m[i + 1])
            count++;
    }

    cout << count;
    return 0;
}
*/
/*
#import <cstdio>
int x, y, n, s;
main()
{
    for (scanf("%d", &n); n--; s += x != y, x = y)
        scanf("%d", &y);
    printf("%d", s);
}


/*


#include <bits/stdc++.h>
using namespace std;
int i,n,a,b,q;
main()
{
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>a;
		if(a!=b)q++;
		b=a;
	}
	cout<<q;
}

*/

#include<bits/stdc++.h>

using namespace std ;

int main ()
{   int  x = 0 ;
    int  y = 5 ;
    for ( int i , cin >> i ; i -- ; x+= x != y   )
    {
       cout << i << endl << x ;
    }
}