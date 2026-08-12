/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter target";
    cin>>k;
    int count=0;

    for(int i=0;i<n;i++){
        int ans=0;
        for(int j=i;j<n;j++){
            ans^=arr[j];
            if(ans==k){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}*/

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

    int target;
    cout<<"enter target";
    cin>>target;
    int xr=0;
    int cnt=0;
    unordered_map<int,int>mp;
    mp[xr]++;
    for(int i=0;i<n;i++){
        xr^=arr[i];
        int x=xr^target;
        cnt+=mp[x];
        mp[xr]++;

    }
    cout<<cnt;
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

    int target;
    cout<<"Enter target";
    cin>>target;

    unordered_map<int,int>mp;
    mp[0]=1;

    int xr=0;

    int count=0;
    for(int i=0;i<n;i++){
        xr^=arr[i];;
        int need=xr^target;
        count+=mp[need];

        mp[xr]++;
    }

    cout<<count;

    return 0;
}