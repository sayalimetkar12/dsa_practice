#include<iostream>
using namespace std;

int factorial(int n){
    cout << n << endl;
    int smallerProblem=factorial(n-1);
    int biggerProblem=n*smallerProblem;
    return biggerProblem;

    int main(){
        int n;
        cin>>n;
        int ans=factorial(n);
        cout<<ans<<endl;
        return 0;
    }
}