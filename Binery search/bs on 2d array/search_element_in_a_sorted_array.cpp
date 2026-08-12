/* brute force 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[3][4]={
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,50},
    };

    int m=3;
    int n=4;

    int target=35;
    bool found=false;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==target){
                found=true;
            }
        }
    }

    if(found){
        cout<<true;
    }
    else{
        cout<<false;
    }

    return 0;
}*/

/* optimal
#include<bits/stdc++.h>
using namespace std;
int found(int matrix[],int m,int target){
    int low=0;
    int high=m-1;
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;

        if(matrix[mid]==target){
            ans=1;
            break;
        }
        else if(matrix[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
      int matrix[3][4]={
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,50},
    };

    int m=3;
    int n=4;

    int target=34;
    int x=false;

    for(int i=0;i<m;i++){
        int count=found(matrix[i],n,target);
            if(count==1){
                x=true;
                break;
            }
    }

    if(x){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }


    return 0;
}
    */

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"enter no of rows =";
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
    cout<<"enter element you want to find";
    cin>>target;

    int low=0;
    int high=(n*m)-1;

    while(low<=high){
        int mid=(low+high)/2;

        int row=mid/m;
        int col=mid%m;

        if(matrix[row][col]==target){
            cout<<"true";
            return 0;
        }
        else if(matrix[row][col]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<"false";

    return 0;

}