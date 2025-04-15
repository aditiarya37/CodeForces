#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_drink = k * l;
    int total_limes = c * d;
    int max_toasts = min(min(total_drink / nl, total_limes), p / np);
    cout << max_toasts / n << endl;
    return 0;
}
