/*#include<bits/stdc++.h>
using namespace std;
int firsto(int arr[],int n,int key){

    int ans=-1;
    int l=0;
    int r=n-1;

    while(l<=r){
        int mid=(l+r)/2;

        if(arr[mid]==key){
            ans=mid;
            r=mid-1;
        }
        else if(arr[mid]<key){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
return ans;
}

int lasto(int arr[],int n,int key){

    int ans=-1;
    int l=0;
    int r=n-1;

    while(l<=r){
        int mid=(l+r)/2;

        if(arr[mid]==key){
            ans=mid;
            l=mid+1;
        }
        else if(arr[mid]<key){
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
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    int key;
    cout<<"enter key";
    cin>>key;

    int first=firsto(arr,n,key);
    if(first==-1){
        cout<<"occurence = "<<first;
    }
    else{
        int second=lasto(arr,n,key);
        int ans=second-first+1;
        cout<<"occurence of number = "<<ans;
    }

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int first(int arr[],int key,int n){
    int l=0;
    int r=n-1;
    int ans=-1;

    while(l<=r){
        int mid=(l+r)/2;

        if(arr[mid]==key){
            ans=mid;
            r=mid-1;
        }
        else if(arr[mid]<key){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return ans;
}

int last(int arr[],int key,int n){
    int l=0;
    int r=n-1;
    int ans=-1;

    while(l<=r){
        int mid=(l+r)/2;

        if(arr[mid]==key){
            ans=mid;
            l=mid+1;
        }
        else if(arr[mid]<key){
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
    int ans=0;
    cout<<"enter key";
    cin>>key;

    int f=first(arr,key,n);

    if(f==-1){
        cout<<"element not present";
        return 0;
    }
    else{
        int l=last(arr,key,n);
        ans=l-f+1;
    }

    cout<<ans; 

    return 0;
}