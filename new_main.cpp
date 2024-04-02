#include <iostream>
using namespace std;
int main(){
    int a = 4;
    double b = 1.5;
    char c = '+';
    int sizeInteger = sizeof(a), sizeDouble = sizeof(b), sizeChar = sizeof(c);
    cout << "size of a is : " << sizeInteger << "bytes" << endl;
    cout << "size of b is : " << sizeDouble << "bytes" << endl;
    cout << "size of c is : " << sizeChar << "bytes" << endl;

}