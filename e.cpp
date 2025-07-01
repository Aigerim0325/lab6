#include <iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0)
        return 1; 
    else
        return a * power(a, b - 1); 
}

int main() {
    int a, b;
    cin >> a >> b;

    if (a < 0 || a > 10 || b < 0 || b > 10) {
        return 1;
    } 
    cout << power(a, b) << endl;

    return 0;
}
