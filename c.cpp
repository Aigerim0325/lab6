#include <iostream>
#include <string>
using namespace std;

void reverseS(string& str, int start, int end) {
    if (start >= end)
        return; 

    swap(str[start], str[end]); 
    reverseS(str, start + 1, end - 1); 
}

int main() {
    string str;
    getline(cin, str);

    if (str.length() > 50) {
        return 1;
    }

    reverseS(str, 0, str.length() - 1);
    cout << str << endl;

    return 0;
}
