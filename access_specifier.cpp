//by default the aaccess specifier is private
//the keyword is public
//The public keyword is access specifier. Access specifier means how the members of a class can be accessed
#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
    int age;

    private:
    int roll_no;
};
int main()
{
    student obj;
    obj.age = 10;
    //obj.roll_no = 12;
    cout<<obj.age<<endl;
    return 0;
}
