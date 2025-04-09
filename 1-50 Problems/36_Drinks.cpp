#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    float sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    double ans = (float((float(sum/100))/n)) * 100;
    cout << ans;
    return 0;
}