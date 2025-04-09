#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<string> output;
    for(int i=0;i<=t;i++){
        string s;
        getline(cin,s);
        if(s.length()>10){
            int n = s.length();
            string ans;
            ans.push_back(s[0]);
            ans += to_string(n-2);
            ans.push_back(s[n-1]);
            output.push_back(ans);
        }
        else{
            output.push_back(s);
        }
    }
    for(int i=0;i<output.size();i++){
        cout << output[i] << endl;
    }
    return 0;
}