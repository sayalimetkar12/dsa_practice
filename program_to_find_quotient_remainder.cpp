/*#include<stdio.h>
using namespace std;
int main()
{
    int number;
    printf("Enter the number :: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("\nThe remainder is 0");
    }
    else
    {
        printf("\nThe remainder is 1");
    }
    return 0;
}
------------------------------------------------*/
#include <iostream>  // You need to include the <iostream> header for input and output
using namespace std;  // This line is fine for a simple program like this
int main()
{
    int divisor, dividend, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient is: " << quotient << endl;
    cout << "Remainder is: " << remainder << endl;

    return 0;
}
