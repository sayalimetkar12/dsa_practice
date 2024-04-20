#include<iostream>
using namespace std;
class overload{
   private :
   int a = 20, b = 20, sum;
   public :

   void add()
   {
   sum = a+b;
   cout<<sum<<endl;
   }

   void sub(){
   sum = a-b;
   cout<<sum<<endl;
   }
};
int main()
{
    overload obj;
    obj.add();
    obj.sub();
}
