#include<iostream>
using namespace std;
int main()
{
    int y, d, w;
    cout << "Enter the no of days :: ";
    cin >> d;
    y = d/365;
    d = d%365;
    w = d/7;
    d = d%7;
    cout <<"the no of years is ::" << y << endl;
    cout <<"the no of weeks is ::" << w << endl;
    cout <<"the no of days is ::" << d << endl;
    return 0;
}
