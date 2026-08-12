#include<bits/stdc++.h>
using namespace std;
long long c=0;

void merge(int arr[],int left,int mid,int right){
    int l=left;
    int r=mid+1;
    vector<int>v;

    int j=mid+1;

    for(int i=left;i<=mid;i++){
        while(j<=right && arr[i]>arr[j]*2){
            j++;
        }
        c+=j-(mid+1);
    }
    

    while(l<=mid && r<=right){
        if(arr[l]<=arr[r]){
            v.push_back(arr[l++]);
        }
        else{
            v.push_back(arr[r++]);
        }
    }

    while(l<=mid){
        v.push_back(arr[l++]);
    }

    while(r<=right){
        v.push_back(arr[r++]);
    }

    for(int i=0;i<v.size();i++){
        arr[left+i]=v[i];
    }

}
void mergesort(int arr[],int left,int right){
    if(left==right){
        return;
    }
    int mid=(left+right)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,mid,right);
}
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter elemewnt";
        cin>>arr[i];
    }

    mergesort(arr,0,n-1);
    cout<<c;

    return 0;
}