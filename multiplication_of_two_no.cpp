#include<iostream>
using namespace std;
int main()
{
    double first, second, product;

    cout << "Enter 1st number :: ";
    cin  >> first;
    cout << "Enter 2nd number :: ";
    cin  >> second;

    product = first * second;
    cout << "product of two no :: [ "<<first<<" * "<<second<<" ] = " << product<<"\n";

    return 0;

}
