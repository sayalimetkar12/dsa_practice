#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x,y;
    cout<<"Please enter the number for x";
    cin>>x;
    cout<<"Please enter the number for y";
    cin>>y;

    if (x==y)
    {
        cout<<"both the numbers are equal";
    }
    else if (x < y)
    {
        cout<<"y is greater number";
    }
    else
    {
        cout<<"x is greater number";
    }
}
