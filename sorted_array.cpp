#include<iostream>
using namespace std;
bool sortedArray(int *arr, int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        int remainingPart = sortedArray(arr+1, size-1);
        return remainingPart;
    }
}
int main(){
    int arr[5]={5,6,7,8,9};
    int size=5;
    int ans=sortedArray(arr, size);
    if(ans){
        cout<<"The array is sorted"<<endl;
    }
    else{
        cout<<"The array is not sorted"<<endl;
    }
    return 0;
}
