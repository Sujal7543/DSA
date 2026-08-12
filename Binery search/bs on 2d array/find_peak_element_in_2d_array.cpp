
/*#include<bits/stdc++.h>
using namespace std;
int findindex(int matrix[],int n){
int maxelement=-1;
int maxindex=-1;
for(int i=0;i<n;i++){
    if(matrix[i]>maxelement){
        maxelement=matrix[i];
        maxindex=i;
    }
}
return maxindex;
}
int main(){
    int matrix[5][5]={
        {1,1,1,1,1},
        {-1,1,1,1,1},
        {1,1,1,1,-1},
        {1,1,1,1,-1},
        {1,1,1,10,-1},
    };
    int m=5;
    int n=5;

    int low=0;
    int high=m-1;
    vector<int>ans;

    while(low<=high){
        int mid=(low+high)/2;

        int row=findindex(matrix[mid],n);

        int up=mid-1<0 ? INT_MIN:matrix[mid-1][row];
        int down=mid+1>=m ? INT_MIN:matrix[mid+1][row];

        if(matrix[mid][row]>up && matrix[mid][row]>down){
            ans.push_back(mid);
            ans.push_back(row);
            break;
        }
        else if(matrix[mid][row]<up){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
        if(i!=ans.size()-1){
            cout<<",";
        }
    }


    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int find(int matrix[],int col){
    int maxvalue=-1;
    int maxidx=-1;
    for(int i=0;i<col;i++){
        if(matrix[i]>maxvalue){
            maxvalue=matrix[i];
            maxidx=i;
        }
    }
return maxidx;
}
int main(){
    int matrix[5][5]={
        {1,1,1,1,1},
        {-1,1,1,1,1},
        {1,1,1,1,-1},
        {1,1,1,1,-1},
        {1,1,1,10,-1},
    };
    int row=5;
    int col=5;
    int low=0;
    int high=row-1;

    vector<int>ans;

    while(low<=high){
        int mid=(low+high)/2;

        int ind=find(matrix[mid],col);

        int up=mid-1<0?INT_MIN: matrix[mid-1][ind];
        int down=mid+1>=row?INT_MIN: matrix[mid+1][ind];

        if(matrix[mid][ind]>up && matrix[mid][ind]>down){
            ans.push_back(mid);
            ans.push_back(ind);
            break;
        }
        else if(matrix[mid][ind]<up){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
        if(i!=ans.size()-1){
            cout<<",";
        }
    }

    return 0;
}
    */

#include<bits/stdc++.h>
using namespace std;
int find(int matrix[],int m){
    int maxvalue=-1;
    int maxindex=-1;
    for(int i=0;i<m;i++){
        if(matrix[i]>maxvalue){
            maxvalue=matrix[i];
            maxindex=i;
        }
    }
    return maxindex;
}
int main(){
    int n;
    cout<<"enter no of rows";
    cin>>n;

    int m;
    cout<<"enter no of cols";
    cin>>m;

    int matrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"enter element";
            cin>>matrix[i][j];
        }
    }

    int low=0;
    int high=n-1;

    while(low<=high){
        int row=(low+high)/2;

        int ind=find(matrix[row],m);

        int up=row-1<0?INT_MIN:matrix[row-1][ind];
        int down=row+1<n?INT_MIN:matrix[row+1][ind];

        if(matrix[row][ind]>up && matrix[row][ind]>down){
            cout<<row<<","<<ind;
            return 0;
        }
        else if(matrix[row][ind]<up){
            high=row-1;
        }
        else{
            low=row+1;
        }
        }

        cout<<"-1,-1";

    return 0;
}