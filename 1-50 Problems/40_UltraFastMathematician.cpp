#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    
    for (size_t i = 0; i < a.length(); i++) {
        cout << (a[i] != b[i] ? '1' : '0');
    }
    cout << endl;
    
    return 0;
}