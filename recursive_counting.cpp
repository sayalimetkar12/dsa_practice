/*#include<iostream>
using namespace std;
void print(int n){
    if(n==0){
        return;
    }
    else{
        cout<<n<<endl;
        print(n-1);
    }

}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;

}*/
#include<iostream>
using namespace std;
void print(int n){
    if(n==0){
        return;
    }
    else{

        print(n-1);
        cout<<n<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;

}
