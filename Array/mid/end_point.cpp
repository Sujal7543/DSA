#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[4][4]={
        {0,0,0,0},
        {0,1,0,0},
        {0,0,0,0},
        {0,0,0,0},
    };

    int n=4;
    int m=4;

    int count=0;
    int i=0;
    int j=0;
    while(i<n && j<m && i>= 0 && j>= 0){
        if(count%4==0){
            cout<<matrix[i][j]<<"->";
            if(matrix[i][j]==1){
                count++;
                i++;
            }
            else{
            j++;
            }
        }
        
       else if(count%4==1){
            cout<<matrix[i][j]<<"->";
            if(matrix[i][j]==1){
                count++;
                j--;
            }
            else{
            i++;
            }
        }

        else if(count%4==2){
            cout<<matrix[i][j]<<"->";
            if(matrix[i][j]==1){
                count++;
                i--;
            }
            else{
            j--;
            }
        }

       else  if(count%4==3){
            cout<<matrix[i][j]<<"->";
            if(matrix[i][j]==1){
                count++;
                j++;
            }
            else{
            i--;
            }
        }

    }
    cout<<"end";
    return 0;
}