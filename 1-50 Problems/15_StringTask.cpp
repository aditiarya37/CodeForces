#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    string ans = "";
    for(int i=0;i<str.length();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y'){
            continue;
        }
        else{
            ans += '.';
            ans += tolower(str[i]);
        }
    }
    cout << ans;
    return 0;
}