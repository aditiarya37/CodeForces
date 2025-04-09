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
    if((arr[0]%2==0) && (arr[1]%2==0)){
        for(int i=2;i<n;i++){
            if(arr[i]%2!=0){
                cout << i+1;
            }
        }
    }
    else if((arr[0]%2!=0) && (arr[1]%2!=0)){
        for(int i=2;i<n;i++){
            if(arr[i]%2==0){
                cout << i+1;
            }
        }
    }
    else if((arr[0]%2==0) && (arr[1]%2!=0)){
        if(arr[2]%2==0){
            cout << 2;
        }
        else{
            cout << 1;
        }
    }
    else{
        if(arr[2]%2==0){
            cout << 1;
        }
        else{
            cout << 2;
        }
    }
    return 0;
}