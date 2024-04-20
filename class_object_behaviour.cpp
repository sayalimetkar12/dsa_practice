#include<iostream>
#include<string>
using namespace std;
//inside class method
/*class Student
{
    public:
    eating()
    {
        cout<<"I can eat";
    }


};
int main()
{
    Student ragini;
    ragini.eating();
    return 0;
}
*/

//outside class method
class Student
{
    public:
    void eating();
};
    void Student::eating()
{
    cout<<"I can eat";
}
int main()
{
    Student ragini;
    ragini.eating();
    //return 0;
}


