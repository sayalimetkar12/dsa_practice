#include<iostream>
using namespace std;
int main(){

    int rows;
    cin>>rows;

    int col;
    cin>>col;

    int** arr = new int*[rows];
    for(int i=0; i<rows; i++){
        arr[i] = new int[col];
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<endl;
        }
    }
    for(int i=0; i<rows; i++){
        delete []arr[i];
    }
    delete[]arr;
    return 0;


}
