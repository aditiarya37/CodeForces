#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> result;
        int multiplier = 1;
        while (n > 0) {
            int digit = n % 10;
            if (digit > 0) {
                result.push_back(digit * multiplier);
            }
            n /= 10;
            multiplier *= 10;
        }
        cout << result.size() << "\n";
        for (int num : result) {
            cout << num << " ";
        }
        cout << "\n";
    }
    return 0;
}