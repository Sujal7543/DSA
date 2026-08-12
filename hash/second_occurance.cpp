#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=*max_element(arr,arr+n);

    int hash[m+1]={0};
    for(int i =0;i<n;i++){
        hash[arr[i]]++;
    }
    
    int fmaxfreq=0;
    int smaxfreq=0;

    for(int i=0;i<m+1;i++){
        if(fmaxfreq<hash[i]){
            fmaxfreq=hash[i];
        }
    }
int answer=-1;
    for(int i=0;i<m+1;i++){
        if(fmaxfreq>hash[i] && smaxfreq<hash[i]){
            smaxfreq=hash[i];
            answer=i;   
        }
        else if(smaxfreq==hash[i]&& hash[i]>0){
            answer=min(answer,i);
        }
    }
if(answer==-1){
    cout<<" no secnond largest exist";
}
else{
    cout<<"second largest elemenr is : "<<answer;
}
return 0;
}