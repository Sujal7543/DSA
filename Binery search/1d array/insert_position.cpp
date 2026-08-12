/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size aof array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    int el;
    cout<<"enter element you want to insert";
    cin>>el;

    int l=0;
    int r=n-1;
    int ans=0;

    while(l<=r){
        int mid=(l+r)/2;

        if(arr[mid]>=el){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }

    cout<<ans;


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
        cout<<"enter element";
        cin>>arr[i];
    }

    int ans=-1;
    int l=0;
    int r=n-1;
    int key;
    cout<<"enter key";
    cin>>key;

    if(arr[n-1]<key){
        cout<<n;
        return 0;
    }

    while(l<=r){
        int mid=(l+r)/2;

        if(arr[mid]>=key){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }

    cout<<ans;


    return 0;
}