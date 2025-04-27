#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string ticket;
        cin >> ticket;
        int sum1 = ticket[0] + ticket[1] + ticket[2] - 3 * '0';
        int sum2 = ticket[3] + ticket[4] + ticket[5] - 3 * '0';
        if (sum1 == sum2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
