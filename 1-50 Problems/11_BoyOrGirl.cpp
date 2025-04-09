#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    int count = 0;
    unordered_set<char> ch;
    for(int i=0;i<str.length();i++){
        ch.insert(str[i]);
    }
    if(ch.size()%2==0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    return 0;
}