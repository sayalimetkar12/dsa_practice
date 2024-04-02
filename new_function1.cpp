#include<iostream>
using namespace std;
int power(int a,int b){
    int ans = 1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    return ans;
}
int main(){
    int a, b;
    cin >> a >> b;
    int answer = power(a, b);
    cout<<"the answer is : " << answer << endl;
    int c, d;
    cin >> c >> d;
    int answer2 = power(c, d);
    cout<<"the answer 2 is : " << answer2 << endl;
    return 0;
}
#include<iostream>
using namespace std;
int power(int a, int b){
    int ans=1;
    for(int i=1; i<=b;i++){
    ans*=a;
    }
    return 0;
}
int main(){
    int a;
    int b;

    cin>>a>>b;
    int answer=power(a,b);
    cout<<"The answer is : "<<answer<<endl;
    cin>>c>>d;
    int answer2=power(c,d);
    cout<<"The answer is : "<<answer 2<<endl;
    return 0;
    }
