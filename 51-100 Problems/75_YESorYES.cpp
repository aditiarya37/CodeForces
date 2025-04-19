#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> ans;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        if(s=="yes"){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << endl;
    }
    return 0;
}