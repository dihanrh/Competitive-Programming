/*
You are given a number consists of n digits. 
You have to say whether the number is divisible by 2 or not.

123987239684198723691723
output : YES
Output : NO
Input : 129837183619827398123672
Output : Yes
1<=n<=100000
*/
/*
#include<iostream>
using namespace std ;

int main ()
{
   string s ;
   cin >> s ;
   int n = 0 ;

   for ( int i = 0 ; i < s.size() ; i ++)

   {
       if ( s[i] == '4' || s[i] == '5')
       {
           n ++ ;
       }
   }
   

   if ( n == '4' || n == '7')
   {
       cout << "YES" ;
   }
   else 
   {
       cout << "NO"  ;
   }
    

    return 0 ;
}
*/

#include <iostream>
using namespace std;
int main()
{   
    //n is the number of elements in the array
    int n, largest;
    int num[50];
    cout << "Enter number of elements you want to enter: ";
    cin >> n;

    /* Loop runs from o to n, in such a way that first
    * element entered by user is stored in num[0], second 
    * in num[1] and so on. 
    */
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element " << (i + 1) << ": ";
        cin >> num[i];
    }
    // Storing first array element in "largest" variable
    largest = num[0];
    for (int i = 1; i < n; i++)
    {
        /* We are comparing largest variable with every element
       * of array. If there is an element which is greater than
       * largest variable value then we are copying that variable
       * to largest, this way we have the largest element copied
       * to the variable named "largest" at the end of the loop 
       *
       */
        if (largest < num[i])
            largest = num[i];
    }
    cout << "Largest element in array is: " << largest;
    
    return 0;
}