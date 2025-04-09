#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    int ans =  0;
    for(int i=0;i<t;i++){
        string s;
        getline(cin, s);
        if(s[0]=='+' || s[2]=='+'){
            ans++;
        }
        else{
            ans--;
        }
    }
    cout << ans;
    return 0;
}