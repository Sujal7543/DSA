//1st
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

    int hash[n+1]={0};

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int repeting=0;
    int missing=0;

    for(int i=1;i<=n;i++){
        if(hash[i]==2){
            repeting=i;
        }
        else if(hash[i]==0){
            missing=i;
        }
    }
    cout<<"missing="<<missing<<endl<<"repeting="<<repeting;

    return 0;
}*/

//2nd
// by maths
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

    long long sn=(n*(n+1))/2;
    long long s2n=(n*(n+1)*(2*n+1))/6;

    long long s=0;
    long long s2=0;

    for(int i=0;i<n;i++){
        s+=arr[i];
        s2+=(long long)arr[i]*(long long)arr[i];
    }
    long long val1=s-sn;
    long long val2=s2-s2n;

    val2=val2/val1;
    long long x=(val1+val2)/2;
    long long y=val2-x;

    cout<<"repeting="<<x<<endl;
    cout<<"missing="<<y<<endl;

    return 0;

}*/

