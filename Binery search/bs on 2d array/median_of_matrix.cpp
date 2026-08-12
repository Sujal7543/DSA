/*
#include<bits/stdc++.h>
using namespace std;
int find(int matrix[][3],int row,int col,int mid){
    int count=0;
    for(int i=0;i<row;i++){
        int low=0;
        int high=col-1;

        while(low<=high){
            int x=(low+high)/2;

            if(matrix[i][x]>mid){
                high=x-1;
            }
            else{
                low=x+1;
            }
        }
        count+=low;
    }
    return count;
}
int main(){
    int matrix[3][3]={
        {1,4,9},
        {2,5,6},
        {3,7,8},
    };

    int row=3;
    int col=3;

    int low=INT_MAX;
    for(int i=0;i<row;i++){
        low=min(low,matrix[i][0]);
    }
    
    int high=INT_MIN;
    for(int i=0;i<row;i++){
        high=max(high,matrix[i][col-1]);
    }

    int k=(row*col+1)/2;

    while(low<=high){
        int mid=(low+high)/2;

        int x=find(matrix,row,col,mid);

        if(x<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<low;


    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int find(int matrix[3][3],int row,int col,int mid){
    int count=0;
    for(int i=0;i<row;i++){
        int low=0;
        int high=col-1;

        while(low<=high){
            int x=(low+high)/2;

            if(matrix[i][x]>mid){
                high=x-1;
            }
            else{
                low=x+1;
            }
        }
        count+=low;
    }
    return count;
}
int main(){
    int matrix[3][3]={
        {1,4,9},
        {2,5,6},
        {3,7,8},
    };

    int row=3;
    int col=3;

    int low=INT_MAX;
    for(int i=0;i<row;i++){
        low=min(low,matrix[i][0]);
    }
    int high=INT_MIN;
    for(int i=0;i<row;i++){
        high=max(high,matrix[i][col-1]);
    }
    int k=(row*col+1)/2;

    while(low<=high){
        int mid=(low+high)/2;

        int count=find(matrix,row,col,mid);

        if(count<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<low;


    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int find(int n, int m, vector<vector<int>>& matrix, int mid){
    int count=0;
    for(int i=0;i<n;i++){

        int low=0;
        int high=m-1;

        while(low<=high){
            int x=(low+high)/2;

            if(matrix[i][x]<=mid){
                low=x+1;
            }
            else{
                high=x-1;
            }
        }
        count+=low;
    }
return count;
}

int main(){
    int n;
    cout<<"enter no of rows";
    cin>>n;

    int m;
    cout<<"enter no of cols";
    cin>>m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"enter element";
            cin>>matrix[i][j];
        }
    }

    int k=((n*m)+1)/2;
    int ans=-1;

    int low=INT_MAX;
    for(int i=0;i<n;i++){
        low=min(low,matrix[i][0]);
    }

    int high=INT_MIN;
    for(int i=0;i<n;i++){
        high=max(high,matrix[i][m-1]);
    }

    while(low<=high){
        int mid=(low+high)/2;

        int median=find(n,m,matrix,mid);

        if(median<k){
            low=mid+1;
        }
        else{
high=mid-1;
        }
    }

    cout<<low;

    return 0;
}