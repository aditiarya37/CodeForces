#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    int cn1 = 0, cn2 = 0, cn3 = 0;

    // Count occurrences of '1', '2', and '3'
    for (char ch : str) {
        if (ch == '1') cn1++;
        else if (ch == '2') cn2++;
        else if (ch == '3') cn3++;
    }

    string ans = "";

    // Append '1's with '+'
    for (int i = 0; i < cn1; i++) {
        ans += '1';
        ans += '+';
    }
    // Append '2's with '+'
    for (int i = 0; i < cn2; i++) {
        ans += '2';
        ans += '+';
    }
    // Append '3's with '+'
    for (int i = 0; i < cn3; i++) {
        ans += '3';
        ans += '+';
    }

    // Remove the last unnecessary '+'
    if (!ans.empty()) ans.pop_back();

    cout << ans;
    return 0;
}
