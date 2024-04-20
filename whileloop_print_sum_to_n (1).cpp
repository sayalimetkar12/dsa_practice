
#include<iostream>
using namespace std;

int main() 
/*{
  int n;
  cout << "Enter a value for n: ";
  cin >> n;

  int i = 1;
  int sum = 0;

  while(i <= n) {
    cout << i << endl;
    sum = sum + i;
    i++;
  }

  cout << "Sum of numbers from 1 to " << n << ": " << sum << endl;

  return 0;
}
*/
{
  int n;
  cout << "Enter the value of n : "<< endl;
  cin >> n;
  int sum = 0;
  for(int i = 1; i <=n; i++){
    sum = sum + i;
  }
  cout << sum << endl;
}