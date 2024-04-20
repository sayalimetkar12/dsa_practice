#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    string name;
    int age;
    bool gender;
};
int main()
{
    Student Yash;
    Yash.name   = "Yash";
    cout << "Name: " << Yash.name << endl;

    return 0;
}
