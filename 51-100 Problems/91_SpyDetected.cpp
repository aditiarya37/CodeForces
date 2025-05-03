#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int val = a[0] == a[1] ? a[0] : a[2];
        for (int i = 0; i < n; i++) {
            if (a[i] != val) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
