#include<iostream>
using namespace std;
class sum
{
public :
int a, b, c;

void add()
{
    a = 10;
    b = 20;
    cout<<a+b<<endl;
}
void add(int x, int y)
{
    a = x;
    b = y;
    cout<<a+b<<endl;
}
void add(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
    cout<<a+b+c<<endl;
}
};
int main()
{
    sum obj;
    obj.add();
    obj.add(10, 20);
    obj.add(10, 20, 30);
}
