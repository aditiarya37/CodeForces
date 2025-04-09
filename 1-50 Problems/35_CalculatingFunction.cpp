#include<iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long ecnt = n/2;
    long long ocnt = (n+1)/2;
    long long esum = ecnt * (ecnt+1);
    long long osum = ocnt*ocnt;
    cout << esum-osum;
    return 0;
}