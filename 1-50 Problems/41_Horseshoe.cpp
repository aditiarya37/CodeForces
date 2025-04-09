#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int> arr(4);
    for(int i=0;i<4;i++){
        cin >> arr[i];
    }
    unordered_map<int,int> hash;
    for(int i=0;i<4;i++){
        hash[arr[i]]++;
    }
    int count = 0;
    for(const auto &i : hash){
        count += i.second-1;
    }
    cout << count;
    return 0;
}