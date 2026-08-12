#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array =";
    cin>>n;
    
    int m;
    cout<<"enter element in one row =";
    cin>>m;
    int matrix[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"enter element at index "<<i<<j<<"= ";
            cin>>matrix[i][j];
        }
    }
    int st=0;
    int ed=0;
    int strange=n-1;
    int edrange=m-1;
    while(ed<m){
        int i=st;
        int j=ed;
        while(i<=strange && j<=edrange){
        cout<<matrix[i][j]<<" ";
        i++;j++;
        }
        cout<<endl;
        ed++;
        strange--;
    }

    return 0;
}