#include<iostream>
using namespace std;
    bool linearSearch(int arr[], int size, int k){
        if(size==0){
            return false;
        }
        if(size==1){
            return true;
        }
        int remainingPart=linearSearch(arr+1, size-1, k);
        return remainingPart;
    }
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int key=4;
    bool ans = linearSearch(arr,size,key);
    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    return 0;
}