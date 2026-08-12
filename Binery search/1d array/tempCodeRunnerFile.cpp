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

    int l=0;
    int r=n-1;
    int ans=0;

    while(l<=r){
        int mid=(l+r)/2;

        if(mid%2!=0){
            mid--;
        }

        if(mid>0 && arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
            ans=arr[mid];
            break;
        }
        else if(mid<n-1 && arr[mid]==arr[mid+1]){
            l=mid+2;
        }
        else{
            r=mid-2;
        }
    }

    cout<<ans;

    return 0;
}