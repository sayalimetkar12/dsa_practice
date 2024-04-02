#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int a = 1;
    int b = 0;
    int NextNumber;

    cout << a << " " << b << " ";
    for (int i = 3; i <= n; i++) {
        NextNumber = a + b;
        cout << NextNumber << " ";

        a = b;
        b = NextNumber;
    }

    return 0;
}

