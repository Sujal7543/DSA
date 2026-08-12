/*#include<bits/stdc++.h>
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

    unordered_map<int,int>freq;

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    int missing=0;
    int repeting=0;
    for(int i=1;i<=n;i++){
        if(freq[i]==0){
            missing=i;
        }
        if(freq[i]==2){
            repeting=i;
        }
    }

    cout<<missing;
    cout<<repeting;

    

    return 0;
}*/

/*
by math

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

    int sn=n*(n+1)/2;
    int s2n=n*(n+1)*(2*n+1)/6;

    int s=0;
    int s2=0;

    for(int i=0;i<n;i++){
        s+=arr[i];
        s2+=arr[i]*arr[i];
    }

    int val1=s-sn;
    int val2=s2-s2n;

    val2=val2/val1;

    int x=(val1+val2)/2;

    int y=val2-x;

    cout<<x;
    cout<<y;

    return 0;
}*/

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

    int xr=0;

    for(int i=0;i<n;i++){
        xr^=arr[i];
        xr^=i+1;
    }

    int bitno=0;
    while(1){
        if((xr & (1<<bitno))!=0){
            break;
        }
        bitno++;
    }

    int zero=0;
    int one=0;

    for(int i=0;i<n;i++){
        if((arr[i] & (1<<bitno))!=0){
            one^=arr[i];
        }
        else{
            zero^=arr[i];
        }
    }

    for(int i=1;i<=n;i++){
        if((i & (1<<bitno))!=0){
            one^=i;
        }
        else{
            zero^=i;
        }
    }

    int missing=0;
    int repeting=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==zero){
            count++;
        }
    }

    if(count==2){
        missing=one;
        repeting=zero;
    }
    else{
        missing=zero;
        repeting=one;
    }

    cout<<"missing="<<missing;
    cout<<"repeting"<<repeting;
    return 0;
}



