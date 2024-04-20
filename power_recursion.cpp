#include<iostream>
using namespace std;
voit power(int n){
    if(n==0)
    return 1;
    else
    return 2*power(n-1);
}
int main(){
    int n; 
    cin>>n;
    cout<<endl;
    print(n);
    return 0;
}