/*sum of highest and lowest frequency*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0;
cout<<"enter the size of array";
cin>>n;
int arr[n];
cout<<"enter elemets in array";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int m=*max_element(arr,arr+n);

int hash[m+1]={0};

for(int i=0;i<n;i++){
    hash[arr[i]]++;
}

int hfreq=0;
int lfreq=INT_MAX;

for(int i=0;i<m+1;i++){
    if(hfreq<hash[i]){
        hfreq=hash[i];
    }
}

for(int i=0;i<m+1;i++){
    if(0<hash[i] && hash[i]<lfreq){
        lfreq=hash[i];
    }
}

cout<<hfreq+lfreq;

    return 0;
}