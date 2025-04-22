#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }

    int left = 0, right = n - 1;
    int sereja = 0, dima = 0;
    bool turn = true;

    while (left <= right) {
        int choice;
        if (cards[left] > cards[right]) {
            choice = cards[left++];
        } else {
            choice = cards[right--];
        }

        if (turn) {
            sereja += choice;
        } else {
            dima += choice;
        }
        turn = !turn;
    }

    cout << sereja << " " << dima << endl;
    return 0;
}
