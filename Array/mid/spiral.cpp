#include<bits/stdc++.h>
using namespace std;
int main(){
    int r;
    cout<<"enter no of rows";
    cin>>r;

    int c;
    cout<<"Enter no of coloums";
    cin>>c;

    int matrix[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }

    int left=0;
    int right=c-1;
    int up=0;
    int down=r-1;

    while(left<=right && up<=down){
        for(int i=left;i<=right;i++){
            cout<<matrix[up][i];
        }
        up++;
        for(int i=up;i<=down;i++){
            cout<<matrix[i][right];
        }
        right--;
        if(up<=down){
        for(int i=right;i>=left;i--){
            cout<<matrix[down][i];
        }
    }
        down--;
        if(left<=right){
        for(int i=down;i>=up;i--){
            cout<<matrix[i][left];
        }
    }
        left++;
    }

    return 0;
}