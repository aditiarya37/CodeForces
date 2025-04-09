#include<iostream>
using namespace std;
int main(){
    long long n,m,a,h,v;
    cin >> n >> m >> a;
    if(n%a==0){
        h = n/a;
    }
    else{
        h = (n/a)+1;
    }
    if(m%a==0){
        v = m/a;
    }
    else{
        v = (m/a)+1;
    }
    long long ans = h*v;
    cout << ans;
    return 0;
}