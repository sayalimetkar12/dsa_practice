#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    //int toPrint = n*n;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout <<i<<" ";
            //toPrint = toPrint - 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}