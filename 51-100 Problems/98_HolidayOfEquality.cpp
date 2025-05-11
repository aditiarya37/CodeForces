#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int max_a = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        max_a = max(max_a, a[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += max_a - a[i];
    }

    cout << sum << endl;
    return 0;
}
