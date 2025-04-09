#include<iostream>
using namespace std;
int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    bool flag = true;
    for(int i=0,j=(s2.length()-1);j>=0;i++,j--){
        if(s1[i]!=s2[j]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}