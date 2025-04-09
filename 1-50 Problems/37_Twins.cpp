#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end(),greater<int>());
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int cnt = 0;
    int temp = 0;
    for(int i=0;i<n;i++){
        temp += arr[i];
        cnt++;
        if(temp>(sum-temp)){
            break;
        }
    }
    cout << cnt;
    return 0;
}