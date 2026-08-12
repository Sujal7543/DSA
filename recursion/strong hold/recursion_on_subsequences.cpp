#include<bits/stdc++.h>
using namespace std;
void sub(int i,int n,int arr[],vector<int>&v){
if(i>=n){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<",";
    }
    cout<<endl;
    return;
}
v.push_back(arr[i]);
sub(i+1,n,arr,v);
v.pop_back();
sub(i+1,n,arr,v);
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
    vector<int>v;

    sub(0,n,arr,v);

    return 0;
}