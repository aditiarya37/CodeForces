#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    cin >> str;
    vector<int> ans;
    int i=0;
    while(i<str.length()-1){
        if(str[i]=='.'){
            ans.push_back(0);
        }
        else{
            if(str[i+1]=='.'){
                ans.push_back(1);
            }
            else{
                ans.push_back(2);
            }
            i++;
        }
        i++;
    }
    if(i==str.length()-1){
        ans.push_back(0);
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i];
    }
    return 0;
}