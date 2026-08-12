/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[5][5]={
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30},
    };
    int m=5;
    int n=5;

    int target=5;
    bool found=false;
    int i=0;
    int j=m-1;
    

    while(i<m && j>=0){
        if(matrix[i][j]==target){
            found=true;
            break;
        }
        else if(matrix[i][j]>target){
            j--;
        }
        else{
            i++;
        }
    }

    if(found){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows";
    cin>>n;

    int m;
    cout<<"enter no of coloums";
    cin>>m;

    int matrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"enter element";
            cin>>matrix[i][j];
        }
    }

    int target;
    cout<<"Enter target";
    cin>>target;

    int row=0;
    int col=m-1;

    while(row<n && col>=0){
        if(matrix[row][col]==target){
            cout<<"found";
            return 0;
        }
        else if(matrix[row][col]<target){
            row++;
        }
        else{
            col--;
        }
    }
    cout<<"not found";


    return 0;
}