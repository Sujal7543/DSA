#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cout<<"enter the size of array";
   cin>>n;
   int arr[n];
   int hash[n+1]={0};
   for(int i=0;i<n;i++){
    cin>>arr[i];
    hash[arr[i]]++;
   }
int maxfreq=0;
int number=0;
   for(int i=0;i<=n;i++){
    if(hash[i]>maxfreq){
      maxfreq=hash[i];
      number=i;
    }
    else if(hash[i]==maxfreq && hash[i]>0 ){
      number=min(number,i);
    }
   }
   cout<<"highest occuring number is ->"<<number;
    return 0;

}