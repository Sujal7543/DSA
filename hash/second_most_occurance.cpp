#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=*max_element(arr,arr+n);
    int hash[m+1]={0};

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
int maxfreq=0;
int secmaxfreq=0;
    for(int i=0;i<m+1;i++){
        if(maxfreq<hash[i]){
            maxfreq=hash[i];
        }
    }
int answer=-1;
for(int i=0;i<=m;i++){
    if(hash[i]<maxfreq && hash[i]>secmaxfreq){
        answer=hash[i];
        answer=i;
         }
    }
if(answer==-1){
    cout<<"no second most exit";
}
else{
    cout<<answer;
}
      
    return 0;
}