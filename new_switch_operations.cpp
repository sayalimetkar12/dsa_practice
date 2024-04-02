#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout <<"Enter the value of a" << endl;
    cin >> a;

    cout <<"Enter the value of b" << endl;
    cin >> b;

    char op;
    cout << "The operation will be" << endl;
    cin >> op;

    switch(op){
        case '+' : cout << (a+b) << endl;
        break;

        case '-' : cout << (a-b) << endl;
        break;

        case '*' : cout << (a*b) << endl;
        break;

        case '/' : cout << (a/b) << endl;
        break;

        default : cout << "This is a default case " << endl;
        break;
    }
    cout << endl;
    return 0;

}
/*
#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b : "<<endl;
    cin>>b;
    char (op);
    cout<<"The operation will be : "<<endl;
    cin>>(op);
    switch(op){
    case '+' : cout<<"The operation will be (a+b): "<<endl;
    break;
    case '-' : cout<<"The operation will be (a-b): "<<endl;
    break;
    case '*' : cout<<"The operation will be (a*b): "<<endl;
    break;
    case '/' : cout<<"The operation will be (a/b): "<<endl;
    break;
    default : cout<<"This is the default case : "<<endl;
    break;
    return 0;
    }
}


*/


































