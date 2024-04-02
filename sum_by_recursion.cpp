#include<iostream>
using namespace std;
bool getArray(int *arr, int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remainingPart = getArray(arr+1, size-1);
    int sum = arr[0] + remainingPart;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int sum=getArray(arr, size);
    {
        cout<<"The sum of array is : "<<sum<<endl;
    }
    return 0;
}