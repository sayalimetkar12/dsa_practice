#include <iostream>
using namespace std;
void PrintCounting(int n){
    for(int i = 0; i <= n; i++){
    cout << i << " ";
    }
    cout << endl;
}
int main(){
    int n;
    cin>>n;
    PrintCounting(n);
    return 0;
}