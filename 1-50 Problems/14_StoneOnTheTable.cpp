#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    string str;
    getline(cin, str);
    int ans = 0;
    for(int i=0;i<n-1;i++){
        if(str[i+1]==str[i]){
            ans++;
        }
    }
    cout << ans;
    return 0;
}