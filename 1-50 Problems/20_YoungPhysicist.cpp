#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> mat(n,vector<int>(3));
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin >> mat[i][j];
        }
    }
    int sumx=0, sumy=0, sumz=0;
    for(int i=0;i<n;i++){
        sumx += mat[i][0];
        sumy += mat[i][1];
        sumz += mat[i][2];
    }
    if(sumx==0 && sumy==0 && sumz==0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}