#include<iostream>
using namespace std;
class emp
{
    private:int salary;

    public:
    void setsalary(int s)
    {
        salary = s;
    }
    int getsalary()
    {
        return salary;
    }


};
int main()
{
    emp obj;
    obj.setsalary(5000);
    cout<<obj.getsalary();
    return 0;
}
