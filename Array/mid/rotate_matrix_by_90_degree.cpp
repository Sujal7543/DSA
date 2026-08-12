/*#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int matrix[4][4]={
        {5,1,9,11},
        {2,4,8,10},
        {13,3,6,7},
        {15,14,12,16}
    };

    int n=4;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        int b=n-1;
        for(int j=0;j<n/2;j++){
            swap(matrix[i][j],matrix[i][b]);
            b--;
            }
        }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows and coloum";
    cin>>n;

    int matrix[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++){
        swap(matrix[j][i],matrix[j][n-1-i]);
    }
}

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}