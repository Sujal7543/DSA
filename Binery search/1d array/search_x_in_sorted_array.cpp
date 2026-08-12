/*#include<bits/stdc++.h>
using namespace std;
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
    cout<<"enter element you want to find";
    cin>>x;

    int l=0;
    int r=n-1;
    int ans=-1;

    while(l<=r){
        int mid=(l+r)/2;

        if(arr[mid]==x){
            ans=mid;
            break;
        }
        else if(arr[mid]<x){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }

    cout<<"element present at index"<<ans;


    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter ize of array";
    cin>>n;
    int arr[n];
    cout<<"enter element in ascending order";

    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }

    int key;
    cout<<"enter key";
    cin>>key;
    
    int low=0;
    int high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==key){
            cout<<mid;
            return 0;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<"element not found";

    return 0;
}