#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int i;
    if((n%2)!=0){
        i = (((n-1)/2)*m)+m/2;
    }
    else{
        i = (n/2)*m;
    }
    cout << i;
    return 0;
}