#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int count = 0;
    int maxIndex = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[maxIndex]){
            maxIndex = i;
        }
    }
    count += maxIndex;
    int minIndex = 0;
    for(int i=1;i<n;i++){
        if(arr[i]<=arr[minIndex]){
            minIndex = i;
        }
    }
    count += n-1-minIndex;
    if(minIndex<maxIndex){
        count -= 1;
    }
    cout << count;
    return 0;
}