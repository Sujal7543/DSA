#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element";
        cin>>arr[i];
    }
    
    int k;
    cout<<"enter k";
    cin>>k;

    int l=0;
    int r=0;

    int sum=arr[0];
    int ans=0;
    while(r<n){
        while(sum>k){
            sum-=arr[l];
            l++;
        }

        if(sum==k){
            ans=max(ans,r-l+1);
        }
        r++;
        sum+=arr[r];
    }
    cout<<ans;

    return 0;
}