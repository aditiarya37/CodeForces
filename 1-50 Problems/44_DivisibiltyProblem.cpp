#include<iostream>
#include<vector>
using namespace std;
int divisibilityProblem(int a, int b){
    return (a%b == 0 ? 0 : b - (a%b));
}
int main(){
    int t;
    cin >> t;
    vector<int> ans(t);
    for(int i=0;i<t;i++){
        int a,b;
        cin >> a >> b;
        ans[i] = divisibilityProblem(a,b);
    }
    for(int i=0;i<t;i++){
        cout << ans[i] << endl;
    }
    return 0;
}