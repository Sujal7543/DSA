/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element ="<<i+1<<"=";
        cin>>arr[i];
    }

    int days;
    cout<<"enter in how much days you have to ship item";
    cin>>days;

    int low=*max_element(arr,arr+n);
    int high=0;
    for(int i=0;i<n;i++){
        high+=arr[i];
    }

    while(low<=high){
        int kg=(low+high)/2;
        int count=0;
        int sum=0;

        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>kg){
                count++;
                sum=arr[i];
            }
            if(i==n-1){
                count++;
            }
        }
        if(count>days){
            low=kg+1;
        }
        else{
            high=kg-1;
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

    int weights[n];
    for(int i=0;i<n;i++){
        cout<<"enter element";
        cin>>weights[i];
    }

    int days;
    cout<<"enter days";
    cin>>days;

    int low=0;
    int high=0;

    for(int i=0;i<n;i++){
        low=max(low,weights[i]);
        high+=weights[i];
    }

    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;

        int count=0;

int sum=0;
        for(int i=0;i<n;i++){
          sum+=weights[i];
          if(sum>mid){
            count++;
            sum=weights[i];
          }
        }
          count++;

          if(count>days){
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