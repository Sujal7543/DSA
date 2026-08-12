// brute force .
/*#include<bits/stdc++.h>
using namespace std;
int main(){
int matrix [3][4]={
    {0,1,2,0},
    {3,4,5,2},
    {1,3,1,5}
};
int m= 3;
int n=4;

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(matrix[i][j]==0){
        int x=i;
        for(int j=0;j<n;j++){
            if(matrix[x][j]!=0){
                matrix[x][j]=-1;
            }
        } 
        int y=j;
        for(int i=0;i<m;i++){
            if(matrix[i][y]!=0){
                matrix[i][y]=-1;
            }
        }
        } 
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(matrix[i][j]==-1){
            matrix[i][j]=0;
        }
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
cout<<matrix[i][j];
}
cout<<endl;
}
    return 0;
}*/

//better
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
int matrix [3][4]={
    {0,1,2,0},
    {3,4,5,2},
    {1,3,1,5}
};
int m= 3;
int n=4;
int row[m]={0};
int col[n]={0};

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(matrix[i][j]==0){
            row[i]=1;
            col[j]=1;
        }
    }
}

for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
    if(row[i]==1||col[j]==1){
        matrix[i][j]=0;
    }
}
}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<matrix[i][j];
    }
    cout<<endl;
}
return 0;
}*/
//optimal
/*
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
int col0=1;
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
            if(matrix[i][0]=0||matrix[0][j]==0){
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
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int r;
    cout<<"Enter no of rows=";
    cin>>r;

    int c;
    cout<<"Enter no of coloums=";
    cin>>c;

    int matrix[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }

    int col0=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
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

    for(int i=1;i<r;i++){
        for(int j=1;j<c;j++){
            if(matrix[i][j]!=0){
                if(matrix[i][0]==0||matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }

    for(int i=0;i<c;i++){
        if(matrix[0][0]==0){
            matrix[0][i]=0;
        }
    }

    for(int i=0;i<r;i++){
        if(col0==0){
            matrix[i][0]=0;
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}