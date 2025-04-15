#include <iostream>
using namespace std;

int main() {
    int n, k, time_left = 240;
    cin >> n >> k;
    time_left -= k;
    int total = 0, solved = 0;
    for (int i = 1; i <= n; ++i) {
        total += 5 * i;
        if (total <= time_left)
            solved++;
        else
            break;
    }
    cout << solved << endl;
    return 0;
}
