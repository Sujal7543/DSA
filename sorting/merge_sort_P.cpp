/*#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int left,int right,int mid){
int n1=mid-left+1;
int n2=right-mid;
int l[n1] ,r[n2];

for(int i=0;i<n1;i++){
    l[i]=arr[left+i];
}
for(int j=0;j<n2;j++){
    r[j]=arr[mid+1+j];
}

int i=0,j=0,k=left;

while(i<n1 && j<n2){
    if(l[i]<=r[j]){
        arr[k]=l[i];
        i++;
    }else{
        arr[k]=r[j];
        j++;
    }
    k++;
}
while(i<n1){
    arr[k]=l[i];
    i++;
    k++;
}
while(j<n2){
    arr[k]=r[j];
    j++;
    k++;
}
}
void mergesort(int arr[],int left,int right){
    if(left<right){
    int mid =(left+right)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,right,mid);
    }
}
int main(){ 
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int left , int right,int mid){
int temp[right-left+1];
int l=left;
int r=mid+1;
int k=0;

while(l<=mid && r<=right){
    if(arr[l]<=arr[r]){
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

for(int i=0;i < k ;i++){
    arr[left+i]=temp[i];

}

}

void merge_sort(int arr[],int left,int right){
    if(left>=right){return;}
    int mid=(left + right)/2;
    merge_sort(arr,left,mid);
    merge_sort(arr,mid+1,right);
    merge(arr,left,right,mid);
}


int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cout<<"enter element=";
    cin>>arr[i];
    }

    merge_sort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}