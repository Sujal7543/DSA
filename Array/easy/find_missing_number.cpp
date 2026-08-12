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

    int sum=0;
    for(int i=1;i<n+1;i++){
        sum+=i;
    }

    for(int i=0;i<n;i++){
        sum-=arr[i];
    }

    cout<<sum;

    return 0;
}