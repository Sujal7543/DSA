#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter elmenet";
        cin>>arr[i];
    }

    int prefix=1;
    int suffix=1;

    int ans=INT_MIN;

    for(int i=0;i<n;i++){

        if(prefix==0){prefix=1;}
        if(suffix==0){suffix=1;}
        prefix*=arr[i];
        suffix*=arr[n-1-i];

        int s=max(prefix,suffix);
        ans=max(ans,s);
    }

    cout<<ans;

    return 0;
}