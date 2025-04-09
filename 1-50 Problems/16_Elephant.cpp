#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans=1;
    ans = n/5;
    if(n%5!=0){
        ans += 1;
    }
    cout << ans;
    return 0;
}