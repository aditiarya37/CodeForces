#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int count = 0;
    unordered_map<int, int> hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    count += hash[4];
    count += hash[3];
    if(hash[1]>hash[3]){
        hash[1] -= hash[3];
    }
    else{
        hash[1] = 0;
    }
    if(hash[2]%2==0){
        count += hash[2]/2;
    }
    else{
        count += (hash[2]/2 + hash[2]%2);
    }
    if(hash[1]%4==0){
        count += hash[1]/4;
    }
    else{
        count += (hash[1]/4 + hash[1]%4);
    }
    cout << count;
    return 0;
}