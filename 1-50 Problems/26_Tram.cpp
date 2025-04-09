#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> tram(n, vector<int>(2));
    for(int i=0;i<n;i++){
        cin >> tram[i][0];
        cin >> tram[i][1];
    }
    int ans = 0;
    int pass = 0;
    for(int i=0;i<n;i++){
        pass -= tram[i][0];
        pass += tram[i][1];
        ans = max(ans,pass);
    }
    cout << ans;
    return 0;
}