/*#include<iostream>
using namespace std;
void sayDigit(int num, string arr[]){
int num;
if(num==0){
    return;
}
int digit=num%10;
num=num/10;
sayDigit=(num, arr);
cout<<arr[digit]<<" ";
}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<endl;
    sayDigit(n,arr);
    return 0;
    }
*/
#include<iostream>
using namespace std;

void sayDigit(int num, string arr[]) {
    if (num == 0) {
        return;
    }

    int digit = num % 10;
    num = num / 10;
    sayDigit(num, arr);
    cout << arr[digit] << " ";
}

int main() {
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;

    cout << "Enter a number: ";
    cin >> n;
    cout << endl;

    sayDigit(n, arr);

    return 0;
}
