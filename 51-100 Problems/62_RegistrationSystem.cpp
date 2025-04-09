#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> db;
    while (n--) {
        string name;
        cin >> name;
        if (db[name] == 0) {
            db[name] = 1;
            cout << "OK" << endl;
        } else {
            cout << name << db[name] << endl;
            db[name + to_string(db[name])] = 1;
            db[name]++;
        }
    }
    return 0;
}
