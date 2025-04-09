#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(arr[i]=="Tetrahedron"){
            ans += 4;
        }
        if(arr[i]=="Cube"){
            ans += 6;
        }
        if(arr[i]=="Octahedron"){
            ans += 8;
        }
        if(arr[i]=="Dodecahedron"){
            ans += 12;
        }
        if(arr[i]=="Icosahedron"){
            ans += 20;
        }
    }
    cout << ans;
    return 0;
}