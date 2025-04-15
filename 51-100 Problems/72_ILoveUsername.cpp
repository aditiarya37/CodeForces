#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    int score;
    cin >> score;
    int max_score = score, min_score = score;
    for (int i = 1; i < n; ++i) {
        cin >> score;
        if (score > max_score) {
            count++;
            max_score = score;
        } else if (score < min_score) {
            count++;
            min_score = score;
        }
    }
    cout << count << endl;
    return 0;
}
