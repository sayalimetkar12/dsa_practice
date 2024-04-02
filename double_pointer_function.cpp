#include<iostream>
using namespace std;

void update(int *p2){
    *p2 = *p2 + 1;
    //**p = **p + 1;

}
    int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "before : " << i << endl;
    cout << &i << endl;
    cout << &p << endl;
    update(*p2);
    cout << "after : " << i << endl;
    cout << &i << endl;
    cout << &p << endl;

    }
    //return 0;

