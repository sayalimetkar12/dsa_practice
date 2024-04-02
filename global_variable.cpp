#include<iostream>
using namespace std;
    int score = 15;
    void a(int& i){
        cout << "a : " << score << endl;
        cout << i << endl;
    }
    void b(int& i){
        cout  << "b : " << score << endl;
        cout << i << endl;
    }
    int main(){
        cout << "in main : " <<score << endl;
        int i=5;
        a(i);
        b(i);
    }
