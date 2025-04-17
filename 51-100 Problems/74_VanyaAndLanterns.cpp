#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    double max_gap = max(a[0], l - a[n - 1]);
    for (int i = 1; i < n; ++i)
        max_gap = max(max_gap, (a[i] - a[i - 1]) / 2.0);
    cout << fixed << setprecision(10) << max_gap << endl;
    return 0;
}
