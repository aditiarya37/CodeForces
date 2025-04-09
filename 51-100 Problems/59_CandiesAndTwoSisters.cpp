#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<long long> n(t);
    for(int i=0;i<t;i++){
        cin >> n[i];
    }
    vector<long long> ans;
    for(int i=0;i<t;i++){
        if(n[i]%2==0){
            ans.push_back((n[i]/2)-1);
        }
        else{
            ans.push_back(n[i]/2);
        }
    }
    for(int i=0;i<t;i++){
        cout << ans[i] << endl;
    }
    return 0;
}