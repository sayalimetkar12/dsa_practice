#include<iostream>
#include<string>
using namespace std;
int main()
{/*
    char name[8];
    name[0] = 'S';
    name[1] = 'U';
    name[2] = 'P';
    name[3] = 'R';
    name[4] = 'I';
    name[5] = 'Y';
    name[6] = 'A';


     cout<<name[0];
     cout<<name[1];
     cout<<name[2];
     cout<<name[3];
     cout<<name[4];
     cout<<name[5];
     cout<<name[6];

     return 0;

     string name = "supriya";
     cout<<name;*/
     string fname = "supriya";
     string lname = "mane";
     string fullname = fname.append(lname);
     cout<< fullname<<endl;
     cout<< fullname.length()<<endl;
     cout<< fullname.size()<<endl;
}
