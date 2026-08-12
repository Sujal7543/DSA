/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<"=";
        cin>>arr[i];
    }
    int k;
    cout<<"enter how many time you want to split]";
    cin>>k;

    int low=*max_element(arr,arr+n);
    int high=0;
    for(int i=0;i<n;i++){
        high+=arr[i];
    }

    if(k>n){
        low=-1;
    }
else{
    while(low<=high){
        int mid=(low+high)/2;
int count=0; int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>mid){
                count++;
                sum=arr[i];
            }
            if(i==n-1){
                count++;
            }
        }
        if(count>k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}
cout<<"largest sum of subarray is minimized way is total ="<<low;
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element";
        cin>>arr[i];
    }

    int m;
    cout<<"enter no of spits";
    cin>>m;

    int low= *max_element(arr,arr+n);
    int high=0;
    for(int i=0;i<n;i++){
        high+=arr[i];
    }

    int ans=0;

    while(low<=high){
        int mid=(low+high)/2;
        int count=0;
        int sum=0;

        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>mid){
                count++;
                sum=arr[i];
            }
        }
        count++;

        if(count>m){
            low=mid+1;
        }
        else{
            ans=mid;
            high=mid-1;
        }
    }
    cout<<ans;


    return 0;
}