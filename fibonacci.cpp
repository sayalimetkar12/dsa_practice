#include<iostream>
using namespace std;

int main() {
  int n = 10;
  int a = 0;
  int b = 1;
  int Nextnumber;

  cout << a << " " << b << " ";

  for (int i = 3; i <= n; i++) {
    Nextnumber = a + b;
    cout << Nextnumber << " ";

    a = b;
    b = Nextnumber;
  }

  return 0;
}
