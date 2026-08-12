/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    int x;
    cout<<"enter target no";
    cin>>x;

    int l=0;
    int r=n-1;
    int ans=n;

    while(l<=r){
        int mid=(l+r)/2;

        if(arr[mid]==x){
            l=mid+1;
        }
        else if(arr[mid]<x){
            l=mid+1;
        }
        else{
            ans=mid;
            r=mid-1;
        }
    }

    cout<<"higher bound at index"<<ans;

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

    int key;
    cout<<"enter key";
    cin>>key;

    int ans=-1;
    int l=0;
    int r=n-1;

    while(l<=r){
        int mid=(l+r)/2;

        if(arr[mid]>key){
            ans=mid;
            r=mid-1;
        }

        else{
            l=mid+1;
        }
    }

    cout<<ans;
    return 0;
}