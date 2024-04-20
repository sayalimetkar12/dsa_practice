/*#include<iostream>
#include<string>
using namespace std;

class student
    {
    public:
    string name;
    string gender;
    int age;

    student(string x, string y, int z)
    {
        name=x;
        gender=y;
        age=z;
    }
    };
int main()
{
student stu1("ragini", "f", 10);
cout<<" "<<stu1.name<<" "<<stu1.gender<<" "<<stu1.age;
return 0;
}

-----------------------------*/
//outside class values
#include<iostream>
#include<string>
using namespace std;

class student
    {
    public:
    string name;
    string gender;
    int age;
    student(string x, string y, int z);
    };
    student::student(string x, string y, int z)
    {
        name=x;
        gender=y;
        age=z;
    };
int main()
{
    student stu1("ragini", "f", 10);
    student stu2("sayali", "f", 10);
    cout<<" "<<stu1.name<<" "<<stu1.gender<<" "<<stu1.age;
    cout<<" "<<stu2.name<<" "<<stu2.gender<<" "<<stu2.age<<endl;
    return 0;
}
