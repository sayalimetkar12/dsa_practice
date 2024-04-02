#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    while(i<=n){
        int j;
        while(j<=i){
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}