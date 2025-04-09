#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    int up=0,lo=0;
    for(int i=0;str[i]!='\0';i++){
        if(isupper(str[i])){
            up++;
        }
        else{
            lo++;
        }
    }
    if(up>lo){
        transform(str.begin(), str.end(), str.begin(),  ::toupper);
    }
    else{
        transform(str.begin(), str.end(), str.begin(),  ::tolower);
    }
    cout << str;
    return 0;
}