/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int,int>mp;
    int sum=0;
    int maxi=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
            maxi=i+1;
        }
        else{
            if(mp.find(sum)!=mp.end()){
                maxi=max(maxi,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
    }
    cout<<"maximum subarray with sum 0 is = "<<maxi;



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

    unordered_map<int,int>mp;
    mp[0]=-1;
    int maxi=0;
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(mp.find(sum)!=mp.end()){
            maxi=max(i-mp[sum],maxi);
        }
        if(mp.find(sum)==mp.end()){
        mp[sum]=i;
        }
    }

    cout<<maxi;

    return 0;
}