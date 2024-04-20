#include <iostream>
#include <string.h>
using namespace std;
class student
{
int roll_no;
char name[30];
float SGPA;
public:
int size;
student()
{
 size=3;
}
void accept( student list[]);
void display( student list[]);
void bubble_sort( student list[]);
void insert_sort( student list[]);
void quick_sort( student list[],int first,int last);
void search( student list[]);
void binary_search(student list[]);
};
// ACCEPT FUNCTION
void student:: accept(student list[])
{
int i;
for(i=0; i<size; i++)
{
cout<<"\nEnter Roll-Number, Name, SGPA:";
cin>>list[i].roll_no>>list[i].name>>list[i].SGPA;
}
}
// DISPLAY FUNCTION
void student::display( student list[])
{
int i;
cout<<"\n Roll-Number \t Name \t SGPA \n";
for(int i=0; i<size; i++)
{
cout<<"\n "<<list[i].roll_no<<" \t "<<list[i].name<<"\t "<<list[i].SGPA;
}
cout<<"\n";
}
