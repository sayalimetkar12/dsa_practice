#include<iostream>
using namespace std;
int main()
{
    int i, j;
    for( int i = 1; i <= 3; i++)
    {
        cout<<"outer"<<i<<endl;
        for(int j = 1; j <= 3; j++);
        {
            cout<<" inner"<< j <<endl;
        }
    }
}


























