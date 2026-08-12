#include<bits/stdc++.h>
using namespace std;
bool check(int i,int n,vector<int>&temp,int arr[],int k){
    int sum=0;
    for(int i=0;i<temp.size();i++){
        sum+=temp[i];
        }
    if(sum==k){
        return true;
    }
    if(sum>k){
        return false;
    }
    if(i==n){
        return false;
    }
    temp.push_back(arr[i]);
    if(check(i+1,n,temp,arr,k)){return true;}
    temp.pop_back();
    if(check(i+1,n,temp,arr,k)){return true;}
    return false;
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
    int k;
    cout<<"enter k value";
    cin>>k;
    vector<int>temp;
    bool a=check(0,n,temp,arr,k);
    if(a){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}