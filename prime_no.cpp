/*#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            cout << "It is not a prime number" << endl;
            return 0;
        }
        i = i + 1;
    }
    cout << "It is a prime number" << endl;
    return 0;
}
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n";
    cin >> n;
    int i = 2;
    while(i < n){
        if(n % i == 0){
            cout << "it is not a prime number" << endl;
            return 0;
        }
        i = i + 1;
    }
    cout << "it is a prime number" << endl;
    return 0;

}
