#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int l,int r){
    if(l>r){
        return ;
    }
    swap(arr[l],arr[r]);
    reverse(arr,l+1,r-1);
}
void reverse2(int arr[],int i,int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse2(arr,i+1,n);
}
int main(){
    int arr[5]={1,2,3,4,5};
    reverse(arr,0,4);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<",";
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<endl;
    reverse2(arr,0,n);
    for(int i=0;i<sizeof(arr)/4;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}