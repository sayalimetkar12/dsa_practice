//inheritance means acquiring a parent class into a child class
#include<iostream>
using namespace std;
class A
    {
    public : int a = 100;
    };
class B : public A
    {
    public : int b = 200;
    };
int main(){
B obj;
cout<<obj.a<<endl;
cout<<obj.b<<endl;
}


