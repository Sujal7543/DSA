/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4]={2,7,11,15};
    int n=4;
    int target = 9;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int need = target-arr[i];

        if(mp.find(need)!=mp.end()){
            cout<<mp[need]<<i;
        }
        mp[arr[i]]=i;
    }
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
        cout<<"Enter element";
        cin>>arr[i];
    }

    int target;
    cout<<"enter target";
    cin>>target;

    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int need=target-arr[i];

        if(mp.find(need)!=mp.end()){
            cout<<mp[need]<<","<<i;
            return 0;
        }

        mp[arr[i]]=i;

    }
    cout<<"no sum found";

    return 0;
}