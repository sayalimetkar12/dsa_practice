#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x, n;
    int result, pow;
    cout << "Enter the value of x";
    cin >> x;
    cout << "Enter the value of n";
    cin >> n;

    result = pow(x,n);
    cout << "The result is :: "<< result << endl;
    return 0;

}
