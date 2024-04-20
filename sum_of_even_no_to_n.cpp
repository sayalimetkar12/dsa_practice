#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  int i = 2;
  int sum = 0;

  while(i<=n){
    cout <<i<<endl;
    i = i + 2;
    sum = sum + i;
    cout<<"The sum of even numbers is : "<< n <<" : "<< sum <<endl;
  }
  return 0;
}
