#include<iostream>
using namespace std;
    int n;
    int factorial(int n){
    cout<<n<<endl;
    int smallerProbem=factorial(n-1);
    int biggerProblem=n*factorial(n-1);
    return biggerProblem;
    }
int main(){
    int n;
    cin>>n;
    int ans;
    ans = factorial(n);
    cout<<ans<<endl;
    return 0;
    
}