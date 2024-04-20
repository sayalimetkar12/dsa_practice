#include<iostream>
using namespace std;

int power(int a, int b) {
  int ans = 1;
  for (int i = 1; i <= b; i++) {
    ans = ans * a;
  }
  return ans;
}

int main() {
  // Input for the first pair of numbers
  int a, b;
  cin >> a >> b;

  // Calculate the power and display the result
  int answer = power(a, b);
  cout << "The answer is " << answer << endl;

  // Input for the second pair of numbers
  int c, d;
  cin >> c >> d;

  // Calculate the power and display the result
  int answer2 = power(c, d);
  cout << "The answer2 is " << answer2 << endl;

  return 0;
}
