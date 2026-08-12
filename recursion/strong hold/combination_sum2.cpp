#include<bits/stdc++.h>
using namespace std;
void pairs(int i,int n, vector<int>&temp,int arr[],int target){
    int sum=0;
    for(int i=0;i<temp.size();i++){
        sum+=temp[i];
    }
    if(sum==target){
        cout<<"{";
        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<",";
        }
        cout<<"}"<<endl;
        return;
    }
    if(i==n){
        return;
    }
    if(sum>target){
        return;
    }
    temp.push_back(arr[i]);
    pairs(i+1,n,temp,arr,target);
    temp.pop_back();
    int j=i+1;
    while(j<n && arr[j]==arr[i]){
        j++;
    }
    pairs(j,n,temp,arr,target);
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
    int target;
    cout<<"enter target";
    cin>>target;
    sort(arr,arr+n);

    pairs(0,n,temp,arr,target);
}