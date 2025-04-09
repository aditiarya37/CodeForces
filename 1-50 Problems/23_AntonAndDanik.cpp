#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    string str;
    getline(cin, str);
    int cntA = 0;
    int cntD = 0;
    for(int i=0;i<n;i++){
        if(str[i]=='A'){
            cntA++;
        }
        else{
            cntD++;
        }
    }
    if(cntA>cntD){
        cout << "Anton";
    }
    else if(cntA<cntD){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }
    return 0;
}