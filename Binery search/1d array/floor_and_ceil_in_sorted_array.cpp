/*#include<bits/stdc++.h>
using namespace std;
int flore(int arr[],int n,int x){
    int ans=-1;
    int low=0;
    int high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]<=x){
            ans=arr[mid];
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
return ans;
}
int ceil(int arr[],int n,int x){

    int ans=0;
    int low=0;
    int high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]>=x){
            ans=arr[mid];
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
return ans;

}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    int x;
    cout<<"enter the numbet  whose f and c you want to find";
    cin>>x;

    int f=flore(arr,n,x);
    int c=ceil(arr,n,x);

    cout<<"flore is = "<<f;
    cout<<"ceil is = "<<c;

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int ceil(int arr[],int key,int n){
    int l=0;
    int r=n-1;
    int ans=-1;

    while(l<=r){
        int mid=(l+r)/2;

        if(arr[mid]>=key){
            ans=arr[mid];
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
return ans;
}

int floor(int arr[],int key,int n){
    int l=0;
    int r=n-1;
    int ans=-1;

    while(l<=r){
        int mid=(l+r)/2;

        if(arr[mid]<=key){
            ans=arr[mid];
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
return ans;
}
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element";
        cin>>arr[i];
    }

    int key;
    cout<<"enter key";
    cin>>key;

    int c=ceil(arr,key,n);
    int f=floor(arr,key,n);

    cout<<"floor"<<f;
    cout<<"ceil="<<c<<endl;
    

    return 0;
}