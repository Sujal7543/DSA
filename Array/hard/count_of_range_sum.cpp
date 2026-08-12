#include<bits/stdc++.h>
using namespace std;
long long c=0;

void merge(int left,int mid,int right,int lower,int upper,int prefix[]){
    int l=left;
    int r=mid+1;
    vector<int>v;

    int j=mid+1;
    int k=mid+1;
    for(int i=left;i<=mid;i++){
        while(j<=right && prefix[j]-prefix[i]<lower){
            j++;
        }
        while(k<=right && prefix[k]-prefix[i]<=upper){
            k++;
        }
        c+=k-j;
    }

    while(l<=mid && r<=right){
        if(prefix[l]<=prefix[r]){
            v.push_back(prefix[l]);
            l++;
        }
        else{
            v.push_back(prefix[r]);
            r++;
        }
    }

    while(l<=mid){
        v.push_back(prefix[l]);
        l++;
    }

    while(r<=right){
        v.push_back(prefix[r]);
        r++;
    }

    for(int i=0;i<v.size();i++){
        prefix[left+i]=v[i];
    }

}

void mergesort(int left,int right,int lower,int upper,int prefix[]){
    if(left==right){
        return;
    }
    int mid=(left+right)/2;

    mergesort(left,mid,lower,upper,prefix);
    mergesort(mid+1,right,lower,upper,prefix);
    merge(left,mid,right,lower,upper,prefix);

}
int main(){
    int n;
    cout<<"Enter no =";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element";
        cin>>arr[i];
    }

    int lower;
    cout<<"enter lower";
    cin>>lower;

    int upper;
    cout<<"enter upper";
    cin>>upper;

    int prefix[n+1]={0};

    int sum=0;
    for(int i=1;i<=n;i++){
         sum= sum+arr[i-1];
        prefix[i]=sum;
    }

    mergesort(0,n,lower,upper,prefix);

    cout<<c;



    return 0;
}