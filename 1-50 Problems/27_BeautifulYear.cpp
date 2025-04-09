#include<iostream>
#include<unordered_set>
using namespace std;
bool isUnique(int n){
    unordered_set<int> digits;
    while(n>0){
        int digit = n%10;
        if(!digits.insert(digit).second){
            return false;
        }
        n /= 10;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    while(true){
        n++;
        if(isUnique(n)){
            cout << n;
            break;
        }
    }
    return 0;
}