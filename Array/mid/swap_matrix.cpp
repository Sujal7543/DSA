#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[6][6]={
        {1,2,3,4,5,6},
        {7,8,9,10,11,12},
        {13,14,15,16,17,18},
        {19,20,21,22,23,24},
        {25,26,27,28,29,30},
        {31,32,33,34,35,36},
    };

    int n=6;
    int m=6;

    int shell=2%m;
    int rotate=1;

    int left=shell-1;
    int right=m-shell;
    int up=shell-1;
    int down=n-shell;

    int limit=2*m+(2*n)-4;
    int count=0;

    int targetputting=matrix[up][left];
    int i=up+rotate;
    int j=left;

    while(count<limit){

        int temp=matrix[i][j];
        matrix[i][j]=targetputting;
        targetputting=temp;
        count++;

        if(j==left && i<down){
            i++;
        }
        else if(i==down && j<right){
            j++;
        }
        else if(j==right && i>up){
            i--;
        }
        else if(i==up && j>left){
            j--;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<",";
        }
        cout<<endl;
    }


    return 0;
}