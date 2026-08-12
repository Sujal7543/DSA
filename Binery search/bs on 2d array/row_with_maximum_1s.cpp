/*
#include<bits/stdc++.h>
using namespace std;
int find(int matrix[],int col,int target){

    int low=0;
    int ans=0;
    int high=col-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(matrix[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return col-low;
}

int main(){
    int matrix[3][3]={
        {1,1,1},
        {0,1,1},
        {0,0,1},
    };

    int n=3;
    int m=3;

    int maxcount=-1;
    int maxind=-1;

    for(int i=0;i<n;i++){
        int x=find(matrix[i],m,1);
        if(x>maxcount){
            maxcount=x;
            maxind=i;
        }
    }

    cout<<maxind;

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"enter no of rows";
    cin>>n;

    int m;
    cout<<"enter no of coloums=";
    cin>>m;

    int matrix[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cout<<"enter element";
        cin>>matrix[i][j];
    }
}

int row=0;
int col=m-1;
int ans=-1;
while(row<n && col>=0){
    if(matrix[row][col]==1){
        ans=row;
        col--;
        
    }
    else if(matrix[row][col]==0){
        row++;
    }
}

cout<<ans;
    return 0;
}