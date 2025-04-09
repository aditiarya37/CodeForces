#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string word;
    cin >> word;
    bool condition1 = true, condition2 = true;

    for (char c : word) {
        if (!isupper(c)) {
            condition1 = false;
            break;
        }
    }

    for (int i = 1; i < word.length(); ++i) {
        if (!isupper(word[i])) {
            condition2 = false;
            break;
        }
    }

    if (condition1 || condition2) {
        for (char &c : word) {
            if (isupper(c))
                c = tolower(c);
            else
                c = toupper(c);
        }
    }

    cout << word << endl;
    return 0;
}
