#include<iostream>
using namespace std;
int main()
{
    //string cars[4] = {"swift", "alto", "BMW", "WagonR"};
    string cars[4];
    cars[0] = "swift";
    cars[1] = "alto";
    cars[2] = "BMW";
    cars[3] = "WagonR";

    for(int i = 0; i < 3; i++)
    {
        cout<<cars[i]<<endl;

    }

    return 0;
}
