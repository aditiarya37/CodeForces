#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int mini = min(a,b);
    int rem = (a+b)-(2*mini);
    int ans = rem/2;
    cout << mini << " " << ans;
    return 0;
}