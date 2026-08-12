#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter element";
        cin>>arr[i];
    }

    int k;
    cout<<"Etner k";
    cin>>k;

    unordered_map<int,int>mp;
    mp[0]=1;

    int sum=0;
    int count=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
        int need=sum-k;
        count+=mp[need];
        mp[sum]++;
    }

    cout<<count;
    return 0;
}