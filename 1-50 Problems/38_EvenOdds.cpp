#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long n,k;
    cin >> n >> k;
    long long oddCnt = (n+1)/2;
    if(k<=oddCnt){
        cout << 2 * k - 1;
    }
    else{
        cout << 2 * (k-oddCnt);
    }
    return 0;
}