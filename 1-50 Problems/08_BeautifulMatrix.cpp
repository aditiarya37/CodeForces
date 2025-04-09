#include<iostream>
using namespace std;
int main(){
    int mat[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> mat[i][j];
        }
    }
    int r,c;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(mat[i][j]){
                r = i;
                c = j;
            }
        }
    }
    int count = 0;
    if(r==0 || r==4){
        count += 2;
    }
    if(c==0 || c==4){
        count += 2;
    }
    if(r==1 || r==3){
        count += 1;
    }
    if(c==1 || c==3){
        count += 1;
    }
    cout << count;
    return 0;
}