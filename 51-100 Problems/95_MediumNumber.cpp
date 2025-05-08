#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        int arr[3] = {a, b, c};
        sort(arr, arr + 3);
        cout << arr[1] << endl;
    }
    return 0;
}