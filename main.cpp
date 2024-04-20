#include <iostream>
using namespace std;
int main() {
  int a = 4;
  double b = 1.50;
  char c = '+';
  int sizeInteger = sizeof(a), sizeDouble = sizeof(b), sizeChar = sizeof(c);
  cout << "The size of a is : " << sizeInteger << "bytes" << endl;
  cout << "The size of b is : " << sizeDouble << "bytes" << endl;
  cout << "The size of c is : " << sizeChar << "bytes" << endl;
}