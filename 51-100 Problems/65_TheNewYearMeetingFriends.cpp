#include<iostream>
using namespace std;
int main(){
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int maxi = max(n1, (max(n2,n3)));
    int mini = min(n1,(min(n2,n3)));
    cout << maxi-mini;
    return 0;
}