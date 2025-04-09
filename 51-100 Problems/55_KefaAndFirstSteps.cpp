#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // Input the size of the array

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Input the elements of the array
    }

    int maxLength = 1; // To store the maximum length of non-decreasing subsegment
    int currentLength = 1; // To store the current length of non-decreasing subsegment

    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            currentLength++; // Increment current length if non-decreasing condition is met
            maxLength = max(maxLength, currentLength); // Update maximum length
        } else {
            currentLength = 1; // Reset current length if condition breaks
        }
    }

    cout << maxLength << endl; // Output the result
    return 0;
}
