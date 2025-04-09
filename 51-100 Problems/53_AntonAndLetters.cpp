#include<iostream>
#include<set>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    set<char> st;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!='{' && s[i]!='}' && s[i]!=',' && s[i]!=' '){
            st.insert(s[i]);
        }
    }
    cout << st.size();
    return 0;
}