#include<iostream>
using namespace std;
int main(){
    long long k,n,w;
    cin >> k >> n >> w;
    long long sum = k * (w * (w + 1) / 2);
    if(sum>n){
        cout << sum-n;
    }
    else{
        cout << 0;
    }
    return 0;
}