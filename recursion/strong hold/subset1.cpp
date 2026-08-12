#include<bits/stdc++.h>
using namespace std;
void pairs(int i,int n,vector<int>&temp,int arr[],vector<int>&ans){
    if(i==n){
        int sum=0;
        for(int i=0;i<temp.size();i++){
            sum+=temp[i];
        }
        ans.push_back(sum);
        return;
    }
       pairs(i+1,n,temp,arr,ans);
   temp.push_back(arr[i]);
    pairs(i+1,n,temp,arr,ans);
    temp.pop_back();
}
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element";
        cin>>arr[i];
    }
    vector<int>temp;
    vector<int>ans;
    pairs(0,n,temp,arr,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<",";
    }

    return 0;
}