#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool flag = false;

    for (int i = 2; i < n; i += 2) {
        if ((n - i) % 2 == 0) {
            flag = true;
            break;
        }
    }

    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
