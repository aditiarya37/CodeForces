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
    int police = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
            police += arr[i];
        }
        else if(arr[i]==-1 && police>0){
            police--;
        }
        else{
            count++;
        }
    }
    cout << count;
    return 0;
}