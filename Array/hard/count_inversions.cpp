//extreme brute force
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                c++;
            }
        }
    }

    cout<<c;
    
    return 0;

}*/
/*
#include<bits/stdc++.h>
using namespace std;
int c=0;

void merge(int arr[],int left,int right,int mid){
    int l=left;
    int r=mid+1;
    int temp[right+left-1];
    int k=0;

    while(l<=mid && r<=right){
        if(arr[l]<=arr[r]){
            temp[k++]=arr[l++];
        }
        else{
            temp[k++]=arr[r++];
            c+=(mid-l+1);
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

void mergesort(int arr[],int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);

        merge(arr,left,right,mid);

    }
}
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>arr[i];
    }

    mergesort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"no of pairs="<<c;

    return 0;
}
    */


#include<bits/stdc++.h>
using namespace std;
long long c =0;
void merge(int arr[],int low,int high,int mid){
    int l=low;
    int r=mid+1;
    vector<int>v;

    while(l<=mid && r<=high){
        if(arr[l]<=arr[r]){
            v.push_back(arr[l]);
            l++;
        }
        else{
            v.push_back(arr[r]);
            c+=mid+1-l;
            r++;
        }
    }
        while(l<=mid){
            v.push_back(arr[l++]);
        }

        while(r<=high){
            v.push_back(arr[r++]);
        }
    
        for(int i=0;i<v.size();i++){
            arr[low+i]=v[i];

        }
}
void mergesort(int arr[],int low,int high){
    if(low == high){
        return;
    }
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,high,mid);

}
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter element";
        cin>>arr[i];
    }

    mergesort(arr,0,n-1);
    cout<<c;

    return 0;
}