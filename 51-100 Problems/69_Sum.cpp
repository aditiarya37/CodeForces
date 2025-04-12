#include<iostream>
#include<vector>
using namespace std;
string solve(int n1, int n2, int n3){
    if(n1==0 && n2==0 && n3==0){
        return "YES";
    }
    if(n1==n2 && n2==n3){
        return "NO";
    }
    if(n1>=n2 && n1>=n3){
        return (n2+n3)==n1 ? "YES" : "NO";
    }
    else if(n2>=n3 && n2>=n1){
        return (n1+n3)==n2 ? "YES" : "NO";
    }
    else if(n3>=n1 && n3>=n2){
        return (n2+n1)==n3 ? "YES" : "NO";
    }
    else{
        return "NO";
    }
}
int main(){
    int n;
    cin >> n;
    vector<string> ans(n);
    for(int i=0;i<n;i++){
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        ans[i] = solve(n1,n2,n3);
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << endl;
    }
    return 0;
}