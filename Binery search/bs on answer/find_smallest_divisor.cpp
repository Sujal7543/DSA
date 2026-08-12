/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter size of array "<<i+1<<"=";
        cin>>arr[i];
    }

    int thresehold;
    cout<<"enter thresehold value =";
    cin>>thresehold;


    int low=0;
    int high=*max_element(arr,arr+n);

    while(low<=high){
        int count=0;

        int mid=(low+high)/2;

        for(int i=0;i<n;i++){
            if(arr[i]%mid==0){
                count+=arr[i]/mid;
            }
            else{
                count+=(arr[i]/mid)+1;
            }
        }
            if(count>thresehold){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

    cout<<low;

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
        cout<<"enter value";
        cin>>arr[i];
    }

    int threshold;
    cout<<"enter threshold";
    cin>>threshold;

    int low=1;
    int high=0;
    int ans=-1;

    for(int i=0;i<n;i++){
        high=max(arr[i],high);
    }

    while(low<=high){
        int mid=(low+high)/2;
        int count=0;

        for(int i=0;i<n;i++){
            if(arr[i]%mid==0){
                count+=arr[i]/mid;
            }
            else{
                count+=arr[i]/mid+1;
            }
        }

        if(count>threshold){
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