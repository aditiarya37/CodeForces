#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int cnt = 0, num = 1;
        while (true) {
            if (num % 3 != 0 && num % 10 != 3) {
                cnt++;
                if (cnt == k) {
                    cout << num << endl;
                    break;
                }
            }
            num++;
        }
    }
    return 0;
}
