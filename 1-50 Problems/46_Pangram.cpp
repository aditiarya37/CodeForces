#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_set<char> uniqueLetters;
    for(char c: s){
        char lowerChar = tolower(c);
        if(lowerChar>='a' && lowerChar<='z') {
            uniqueLetters.insert(lowerChar);
        }
    }
    if(uniqueLetters.size()==26){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}