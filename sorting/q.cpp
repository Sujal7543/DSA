#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int left,int right){
int pivot = arr[left];
int l=left+1;
int r=right;

while(l<=r){
    while(l<=right && arr[l]<=pivot){
        l++;
    }
    while(r>=left && arr[r]>pivot){
        r--;
    }
if(l<r){
    int temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
}
}
int temp=arr[left];
arr[left]=arr[r];
arr[r]=temp;

return r;
}

void qs(int arr[],int left,int right){
if(left<right){
    int p=partition(arr,left,right);
    qs(arr,left,p-1);
    qs(arr,p+1,right);
}
} 

int main(){
int n;
cout<<"enter the size of array=";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cout<<"enter the element of array=";
    cin>>arr[i];
}
qs(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}