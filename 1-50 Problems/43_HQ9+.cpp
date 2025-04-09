#include<iostream>
using namespace std;
int main(){
    string p;
    getline(cin, p);
    bool flag = false;
    for(int i=0;i<p.length();i++){
        if((p[i]=='H') || (p[i]=='Q') || (p[i]=='9')){
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