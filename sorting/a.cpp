#include<bits/stdc++.h>
using namespace std;
    void merge(int arr[],int left,int right,int mid){
        int l=left;
        int r=mid+1;
        int k=0;
        int temp[right-left+1];
        while(l<=mid && r<=right){
            if(arr[l]<arr[r]){
             temp[k++]=arr[l++];
            }
            else{
                temp[k++]=arr[r++];
            }
 }
 while(l<=mid){
    temp[k++]=arr[l++];
 }
 while(r<=right){
    temp[k++]=arr[r++];
 }

 for(int i=0;i<k;i++){
    arr[left+i]=temp[i];
 }
}
 void merge_sort(int arr[],int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1,right);
        merge(arr,left,right,mid);
    }
}

int main(){
int n;
cout<<"enter the size of array";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cout<<"enter the element";
    cin>>arr[i];
}
merge_sort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i];
}
    return 0;
}