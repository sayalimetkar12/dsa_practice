#include<iostream>
using namespace std;
int main(){
    int num = 2;
    cout << endl;
    switch (num){
        case 1 : cout << "First" << endl;
        break;

        case 2 : cout << "Second" << endl;
        break;

        case 3 : cout << "This is a default case" << endl;
        break;
    }
    cout << endl;
    return 0;
}
