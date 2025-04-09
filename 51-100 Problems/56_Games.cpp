#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> teams(n);
    
    // Read all teams' uniform colors
    for (int i = 0; i < n; i++) {
        cin >> teams[i].first >> teams[i].second;
    }
    
    int count = 0;
    
    // For each pair of teams (i, j) where i is host and j is guest
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue; // Skip when team plays against itself
            
            // Check if host's home color matches guest's away color
            if (teams[i].first == teams[j].second) {
                count++;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}