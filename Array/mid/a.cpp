#include<bits/stdc++.h>
using namespace std;
int main(){
int matrix [3][4]={
    {0,1,2,0},
    {3,4,5,2},
    {1,3,1,5}
};
int m=3;
int n=4;
int col0=0;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(matrix[i][j]==0){
         matrix[i][0]=0;
        if(j!=0){
            matrix[0][j]=0;
        }
        else{
            col0=0;
        }
        }
    }
}

for(int i=1;i<m;i++){
    for(int j=1;j<n;j++){
        if(matrix[i][j]!=0){
            if(matrix[i][0]==0||matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
    }
}
if(matrix[0][0]==0){
    for(int j=0;j<n;j++){
        matrix[0][j]=0;
    }
}
if(col0==0){
    for(int i=0;i<m;i++){
        matrix[i][0]=0;
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<matrix[i][j];
    }
    cout<<endl;
}
return 0;
}