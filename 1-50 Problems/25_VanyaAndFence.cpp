#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,h;
    cin >> n >> h;
    vector<int> height(n);
    for(int i=0;i<n;i++){
        cin >> height[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(height[i]>h){
            ans += 2;
        }
        else{
            ans += 1;
        }
    }
    cout << ans;
    return 0;
}