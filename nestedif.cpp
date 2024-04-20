//To specify condition within condition we make use of nested if statement
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x, y;
    cin>>x>>y;
    if(x==y)
    {
        cout<<"Both the numbers are equal";
    }
    else
    {
        if (x>y)
        {
            cout<<"x is greater";
        }
        else
        {
            cout<<"y is greater";
        }
    }
}
