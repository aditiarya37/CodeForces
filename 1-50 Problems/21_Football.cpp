#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    bool flag = false;
    int cnt0 = 0, cnt1 = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='0'){
            cnt0++;
            cnt1 = 0;
        }
        else{
            cnt1++;
            cnt0 = 0;
        }
        if(cnt0 == 7 || cnt1 == 7){
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}