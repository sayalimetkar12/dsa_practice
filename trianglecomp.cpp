#include <iostream>
using namespace std;
int main()
{
    int sidea, sideb, sidec;
    cout<<"Input the side of the triangle\n";
    cin>>sidea>>sideb>>sidec;
    if (sidea==sideb && sideb==sidec)
    {
        cout<<"the triangle is equilateral";
    }
    else if (sidea == sideb)
    {
        cout<<"the tringle is isoceles";
    }
}
