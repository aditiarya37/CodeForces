#include<iostream>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    int ans = 0;
    int i=1;
    while(i<=d){
        if(i%k==0){
            ans++;
        }
        if(i%l==0 && i%k!=0){
            ans++;
        }
        if(i%m==0 && i%l!=0 && i%k!=0){
            ans++;
        }
        if(i%n==0 && i%m!=0 && i%l!=0 && i%k!=0){
            ans++;
        }
        i++;
    }
    cout << ans;
    return 0;
}